class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(p.size()>s.size()) return ans;

        vector<int> windowfreq(26,0);
        vector<int> pfreq(26,0);
        for(int i=0;i<p.size();i++)
        {
            windowfreq[s[i]-'a']++;
            pfreq[p[i]-'a']++;


        }

        for(int i=0;i<=s.size()-p.size();i++)
        {
            if(windowfreq==pfreq)
            ans.push_back(i);

            if(i+p.size()<s.size())
            {
                windowfreq[s[i]-'a']--;
                windowfreq[s[i+p.size()]-'a']++;
            }

        }

        return ans;

        
        
    }
};