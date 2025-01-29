class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
    string result="";
    
    int str1_len= str1.size();
    int str2_len= str2.size();
    int res= str1_len - str2_len;
    int i=0;
      while(i<res){
        if(str1[i]==str2[i]){
            result+=str2[i];
        }
        i++;
      }
    return result;
    }
};