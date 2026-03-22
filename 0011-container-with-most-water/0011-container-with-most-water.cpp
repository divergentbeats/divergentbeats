class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1;
        int area=0, distance,maxlen=0, num;
        while(left<right)
        {
            distance=right-left;
            num=min(height[left],height[right]);
            area=num*distance;
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