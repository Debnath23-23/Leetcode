class Solution {
public:
    int minAddToMakeValid(string s) {
        int size=0;
        stack<char>st;

        for(char &ch : s){
            if(ch=='('){
                st.push(ch);
            }
            else{
                if(st.empty()){
                    size++;
                }else{
                    st.pop();
                }
            }
        }
        return size+st.size();
    }
};