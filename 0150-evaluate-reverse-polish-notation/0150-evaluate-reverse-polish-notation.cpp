class Solution {
public:
 

    int evalRPN(vector<string>& tokens) {
        unordered_map<string, function<int(int, int)>> mp={
            
                {"+",[](int a,int b){return a+b;}},
                {"-",[](int a,int b){return a-b;}},
                {"*",[](int a,int b){return (long)a*(long)b;}},
                {"/",[](int a,int b){return a/b;}}

            
        };
        stack <int> st;
        for(string & tokens : tokens){
            if(tokens=="+" || tokens=="-" || tokens=="*" || tokens=="/" ){
                int b= st.top();
                st.pop();

                int a=st.top();
                st.pop();

                
                int result=mp[tokens](a,b);        //mp[token],(a,b);
                st.push(result);
            }else{
                st.push(stoi(tokens));
            }
        }
        return st.top();
    }
};