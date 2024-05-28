class Solution {
public:
int t[101][101];
int solve(int i, int j, int m, int n){


    //to check for out of bound
    if(i<0 || i>=m || j<0 || j>=n){
        return 0;
    }
 
   //Path found
    if(i==m-1 && j==n-1){
        return 1;
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }

    int right=solve(i, j+1 ,m , n); //to mpove right
    int down=solve(i+1, j, m,n); // to move down
    return t[i][j]= right+down;
}
    int uniquePaths(int m, int n) {
        memset(t,-1, sizeof(t)); //memoisation
        
       return  solve(0, 0, m, n);//start from top right and move to bottom left through right down movements
        
        
    }
};