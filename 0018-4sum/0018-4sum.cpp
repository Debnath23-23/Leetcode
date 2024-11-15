class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){
            //first optimaization
            if(i>0 && nums[i]==nums[i-1]) continue;

            for (int j=i+1; j<n;){

               int p=j+1, q=n-1;
                while(p<q){
                    long long sum= (long long) nums[i]+ (long long) nums[j]+ (long long) nums[p]+ (long long) nums[q];

                    if(sum>target){
                        q--;
                    }
                    else if(sum<target){
                        p++;
                    }
                    else{
                     ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++;
                    q--;
                     while(p<q && nums[p]==nums[p-1])p++;
                    //  while(p<q && nums[q]==nums[q+1])q--;

                    }
                }
                  //second optimazation
                  j++;
                  while(j<n && nums[j]==nums[j-1])j++;
                
                }
            }
    
        return ans;
        
    }
};