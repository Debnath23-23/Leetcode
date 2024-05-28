class Solution {
public:
int cal(int& max,int& count){
    if(max>count){
        return max;
    }
    else{
        return count;
    }
}
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                count++;
                 max=cal(max,count);
            }else{
                count=0;
            }
        }
        return max;
        
    }
};