class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int lp=0;
        int rp=height.size()-1;
        int maxwater = 0;

        while(lp < rp){
            int width = rp-lp;
            int length = min(height[lp],height[rp]);

            int currwater= width*length;
            maxwater = max(currwater,maxwater);

            if(height[lp] < height[rp]){
                lp++;
            }else{
                rp--;
            }
        }
        return maxwater;
    }
};