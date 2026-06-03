class Solution {
public:
    int maxArea(vector<int>& height) {
        int lf=0;
        int rt=height.size()-1;
        int maxm=0;
        while(lf<rt){
            int h=min(height[lf],height[rt]);
            int w=rt-lf;
            int ar=h*w;
            maxm=max(maxm,ar);
            if(height[lf]<height[rt])
                lf++;
            else
                rt--;
        }
        return maxm;
    }
};
