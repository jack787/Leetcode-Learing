class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxv=0;
        int l=0,r=height.size()-1;
        while(l<r)
        {
            maxv=max(maxv,(r-l)*min(height[l],height[r]));
            if(height[l]<=height[r])l++;
            else r--;
        }
        return maxv;
    }
};