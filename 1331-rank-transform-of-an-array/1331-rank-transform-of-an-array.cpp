class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       
        
        //base case
        if(arr.size()==0)
            return { };
        
        vector<int> v=arr;
        sort(v.begin(), v.end());
        int rank=2;
        
        unordered_map<int,int>mp;
        mp[v[0]]=1;
        for(int i=1; i<arr.size(); i++){
            if(mp[v[i-1]]!=mp[v[i]]){
                mp[v[i]]=rank++;
            }
        }
        for(int i=0; i<arr.size(); i++){
            v[i]=mp[arr[i]];
        }
        return v;
    }  
};