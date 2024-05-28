class Solution {
    private:
    void solve(string digits,string output, int index,vector<string>& ans, string mapping[] )
    {
        //base case
        if(index>=digits.length()){
            ans.push_back(output);
            return ;
        }
        int number=digits[index]-'0';             // index of string assigning number 
        string value=mapping[number];
        for(int i=0; i<value.length(); i++){
            output.push_back(value[i]);           // line of i for printing "ad", "ae", "af"......
            solve(digits, output, index+1, ans, mapping);//recursive call
            output.pop_back();                           //return back to first i
        }
      }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0)
            return ans;
        
        string output;
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
        
    }
};