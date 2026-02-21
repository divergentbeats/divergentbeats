class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int flag=0;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                if(result.size()!=0)
                {
                    for(int k=0;k<result.size();k++)
                    {
                        if(nums1[i]==result[k])
                        {
                        flag=1;
                        break;
                        }
                    } 
                }
                    if(flag!=1)
                    {
                        result.push_back(nums1[i]);
                        break;
                    }
            }
            flag=0;
        }
    }
        return result;
    }
    
};