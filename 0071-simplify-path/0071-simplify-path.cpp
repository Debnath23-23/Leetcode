// class Solution {
// public:
//     string simplifyPath(string path) {
//        stringstream ss(path);
//        string token=" ";
//        stack<string>st;
//        while(getline(ss,token,"/")){
//         if(token==" "|| token=="."){
//             continue;
//         }
//         else if{
//          if(token!="//"){
//             st.push(token);
//         }
//         else if(!st.empty()){
//             st.pop();
//         }

//         }
        
//         if(st.empty()){
//         return "/";
//        }

//        } 

       
//        string result="";
//        while(!st.empty()){
//         result="/"+ st.top()+result;
//         st.pop();
//        }
//        return result;
//     }
// };







 

class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string token;
        stack<string> st;
        
        // Split the path by '/'
        while (getline(ss, token, '/')) {
            if (token == "" || token == ".") {
                // Ignore empty tokens and current directory references
                continue;
            } else if (token == "..") {
                // Go back one directory if possible
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                // Add the valid directory name to the stack
                st.push(token);
            }
        }
        
        // If the stack is empty, return "/"
        if (st.empty()) {
            return "/";
        }
        
        // Construct the simplified path
        string result = "";
        while (!st.empty()) {
            result = "/" + st.top() + result;
            st.pop();
        }
        
        return result;
    }
};
