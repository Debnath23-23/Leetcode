class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int i=0;
        int j=n-1;
        int mostWater=0;
        while(i<j){
            int width=j-i;
            int heights=min(height[i],height[j]);
            int area= width*heights;
            mostWater=max(mostWater,area);

            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }
        }
        return mostWater;
    }
};