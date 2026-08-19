class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        unordered_set<int> st;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
           if(mp.find(nums2[i])!=mp.end())
           {
             mp[nums2[i]]--;
             st.insert(nums2[i]);
           }
        }

        for(auto i:st)
        ans.push_back(i);

        return ans;
        
    }
};