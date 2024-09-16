class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>st;
        for(int i=0; i<asteroids.size(); i++){
            while(!st.empty() && st.back()>0 && asteroids[i]<0){
                int sum= asteroids[i]+ st.back();
                if(sum<0){
                    st.pop_back();
                }else if(sum >0 ){
                    asteroids[i]=0;
                }else{
                    st.pop_back();
                    asteroids[i]=0;
                }
            }
            if(asteroids[i]!=0){
                st.push_back(asteroids[i]);
            }
        }
        
         return st;
    }
};