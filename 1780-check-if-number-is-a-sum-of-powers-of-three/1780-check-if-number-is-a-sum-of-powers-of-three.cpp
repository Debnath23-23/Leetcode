class Solution {
public:
    bool checkPowersOfThree(int n) {
        for(int i=14; i>=0; i--){
            int no=pow(3,i);
            if(n>=no)
            n-=no;
            if(n==0)
            return true;
        }
        return false;
    }
};