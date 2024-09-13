class Solution {
public:
int operate(int a, int b, string tokens){
    if(tokens=="+"){
        return a+b;
    }
    else if(tokens=="-"){
        return a-b;
    }
      else if(tokens=="*"){
        return (long)a*(long)b;
    }
      else if(tokens=="/"){
        return a/b;
    }
    return -1;
}

    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        for(string & tokens : tokens){
            if(tokens=="+" || tokens=="-" || tokens=="*" || tokens=="/" ){
                int b= st.top();
                st.pop();

                int a=st.top();
                st.pop();

                int result=operate(a,b,tokens);        //mp[token],(a,b);
                st.push(result);
            }else{
                st.push(stoi(tokens));
            }
        }
        return st.top();
    }
};