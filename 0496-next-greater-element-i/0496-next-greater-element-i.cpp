class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            int num=nums1[i];
            int add=-1;
            int j=0;
            while(nums2[j]!=num)
            j++;
            while(j<nums2.size())
            {
                if(nums2[j]>num)
                {
                add=nums2[j];
                break;
                }
                j++;
            }
            if(add!=-1)
            ans.push_back(add);
            else
            ans.push_back(add);
        }
        return ans;
    }
};