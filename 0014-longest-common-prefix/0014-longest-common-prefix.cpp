class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        char temp;
        for(int i=0;i<strs[0].size();i++)
        {
            temp = strs[0][i];
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][i]!=temp)
                return ans;
            }
            ans+=strs[0][i];
        }
        return ans;
        
    }
};