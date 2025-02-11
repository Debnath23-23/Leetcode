class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int insertPosition=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                nums[insertPosition]=nums[i];
                insertPosition++;
            }
        }
        while(insertPosition<n){
            nums[insertPosition++]=0;
        }
    }
};