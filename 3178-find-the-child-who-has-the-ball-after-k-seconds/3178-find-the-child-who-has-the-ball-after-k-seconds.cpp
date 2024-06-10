class Solution {
public:
    int numberOfChild(int n, int k) {
        n--;
        
        int noOfRounds=k/n;
        int goTo =k%n;
        
        if(noOfRounds%2==0){
            return goTo;
        }else{
            return (n-goTo);
        }
        
    }
};