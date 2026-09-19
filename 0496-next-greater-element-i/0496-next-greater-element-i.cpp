class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        int n2=nums2.size();
        int n1=nums1.size();
        for(int i=0;i<n2;i++)
        {
            mp[nums2[i]]=-1;
            for(int j=i+1;j<nums2.size();j++)
            {
                if(nums2[j]>nums2[i])
                {
                mp[nums2[i]]=nums2[j];
                break;
                }
            }
        }
        for(int i=0;i<n1;i++)
        {
            nums1[i]=mp[nums1[i]];
        }
        return nums1;
        
    }
};