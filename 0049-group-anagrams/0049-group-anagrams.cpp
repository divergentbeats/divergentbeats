class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<strs.size();i++)
        {
            string x = strs[i];
            sort(x.begin(),x.end());
            mp[x].push_back(strs[i]);
        }
        for(auto i:mp)
        {
            ans.push_back(i.second);
        }
        return ans;
   
    }
};