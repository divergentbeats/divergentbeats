class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1, maxarea=0, area=0, distance=0,num=0;
        while(left<right)
        {
            distance=right-left;
            num=min(height[left],height[right]);
            area=distance*num;
            if(area>maxarea)
            maxarea=area;

            if(height[left]<height[right])
            left++;
            else
            right--;
        }
        return maxarea;
        
    }
};