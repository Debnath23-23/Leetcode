class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n= nums.size();
        int nums1=INT_MAX;
        int nums2=INT_MAX;

        for(int i=0; i<n; i++){
        int nums3=nums[i];

            if(nums3<=nums1){
                nums1=nums3;
            }
            else if(nums3<=nums2){
                nums2=nums3;
            }
            else{
                return true;
            }
        }
        return false;
    }
};