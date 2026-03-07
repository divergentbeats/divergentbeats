class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        char ans;
        for(int i=0;i<s.size();i++)
        mp[s[i]]++;
        for(int i=0;i<t.size();i++)
        {   
            if(mp[t[i]]==0)
            ans=t[i];
            mp[t[i]]--;
        }
  
        return ans;
        
    }
};