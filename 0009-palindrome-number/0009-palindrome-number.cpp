class Solution {
public:
    bool isPalindrome(int x) {
      // base case
      if(x>=0 and x<10)  // for positive integer case
      return true;
     
      if(x<0 || x%10==0)   // for negative integer case
      return false;        // x%10==0 for input 10 
     
      int y=0;

      while(x>y)
      {
          //reverse the number x to check palindrome
          y=(y*10)+x%10;
          x=x/10;
      }

      return (x==y || x==y/10);



        
    }
}; //time complexity 0(n/2), n= number of digits in x
   //space complexity = constant, cause we can reverse the y variable