class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();

        vector<int>lessPivot;
        vector<int>equalPivot;
        vector<int>morePivot;

        for(int i=0; i<n; i++){
            if(nums[i]<pivot){
               lessPivot.push_back(nums[i]); 
            }
            else if(nums[i]==pivot){
                equalPivot.push_back(nums[i]);
            }
            else{
                morePivot.push_back(nums[i]);
            }
        }

        for(int &num :equalPivot){
            lessPivot.push_back(num);
        }

        for(int &num :morePivot){
            lessPivot.push_back(num);
        }

        return lessPivot;

    }
};