class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,h=height.size()-1;
        int mn,area=0;
        while(l<h)
        {
            mn=min(height[l],height[h]);
            area=max(area,mn*(h-l));
            if(mn==height[l])
                l++;
            else
                h--;
        }
        return area;
    }
};