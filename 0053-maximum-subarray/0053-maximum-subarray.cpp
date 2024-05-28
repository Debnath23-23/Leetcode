class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max_num=nums[0];
        for(int i=0; i<nums.size(); i++){
            sum=sum+nums[i];
           
            if(sum>max_num)
            {
                max_num=sum;
            }
             if(sum<0)
            {
                sum=0;
            }
        }
        return max_num;
        
        
    }
};