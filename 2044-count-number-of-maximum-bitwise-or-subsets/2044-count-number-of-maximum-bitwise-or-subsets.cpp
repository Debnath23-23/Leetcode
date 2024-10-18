 class Solution {
public:
    int countSubsets(int idx, int currOr, vector<int>& nums, int maxOr) {
        if (idx == nums.size()) {
            return (currOr == maxOr) ? 1 : 0;
        }

        // Include the current element in the subset
        int takeCount = countSubsets(idx + 1, currOr | nums[idx], nums, maxOr);

        // Exclude the current element from the subset
        int notTakeCount = countSubsets(idx + 1, currOr, nums, maxOr);

        // Return the total count
        return takeCount + notTakeCount;
    }

    int countMaxOrSubsets(vector<int>& nums) {
        int maxOr = 0;
        // Calculate the maximum OR value of the entire array
        for (int &num : nums) {
            maxOr |= num;
        }

        int currOr = 0;
        // Call the recursive function starting at index 0
        return countSubsets(0, currOr, nums, maxOr);
    }
};
