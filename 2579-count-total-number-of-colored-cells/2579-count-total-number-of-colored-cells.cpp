class Solution {
public:
    long long coloredCells(int n) {
        return (1+2* (long long)(n-1)*n);
    }
};