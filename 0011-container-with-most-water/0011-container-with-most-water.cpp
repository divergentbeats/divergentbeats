class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1, maxlen=0, num, distance,area;
        while(left<right)
        {
            distance=right-left;
            num=min(height[left],height[right]);
            area=distance*num;
            if(area>maxlen)
            maxlen=area;

            if(height[left]<height[right])
            left++;
            else
            right--;
        }
        return maxlen;
        
    }
};