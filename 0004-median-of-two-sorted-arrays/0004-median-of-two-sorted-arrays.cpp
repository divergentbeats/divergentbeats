class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums = nums1;
        nums.insert(nums.end(), nums2.begin(), nums2.end());
        sort(nums.begin(), nums.end());
        double ans=0;
        int n = nums.size();
        if(n%2!=0)
        ans = nums[n/2];
        else
        ans = (nums[(n/2)-1]+ nums[n/2]) /2.00;
        
        return ans;

    }
};