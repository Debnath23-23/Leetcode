class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size()-1;
        int m= abs(nums[0]-nums[n]);
        for(int i=0; i<n; i++){
            m=max(m,abs(nums[i]-nums[i+1]));
        }
        return m;
    }
};


