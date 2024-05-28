class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int round=0; round<nums.size(); round++)
        {
            for(int i=0; i<nums.size()-1; i++ )
            {
                if(nums[i]>nums[i+1])
                {
                    swap(nums[i],nums[i+1]);
                }
            }
        }
        
    }
};