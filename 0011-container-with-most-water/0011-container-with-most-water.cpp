class Solution {
public:
    int maxArea(vector<int>& height) {

    // Brute force
        // int mostWater=0;
        // int n=height.size();
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         int width= j-i;
        //         int heightt=min(height[i],height[j]);
        //         int area=width*heightt;
        //         mostWater=max(mostWater, area);
        //     }
        // }
        // return mostWater;

        // optimize code
        int n=height.size();
        int i=0;
        int j=n-1;
        int maxWater=0;
        while(i<j){
            int width=j-i;
            int dist=min(height[i],height[j]);
            int area=width*dist;
            maxWater=max(area,maxWater);
            height[i]<height[j]?i++:j--;
        }
        return maxWater;
    }
};