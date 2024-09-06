class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        } 

        string result="";
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(begin(result), end(result));
         return result;

    }
};