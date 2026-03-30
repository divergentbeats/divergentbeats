class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        
        if(p.size() > s.size()) return ans;

        vector<int> pCount(26, 0), sCount(26, 0);

        // build frequency of p
        for(char c : p) {
            pCount[c - 'a']++;
        }

        int k = p.size();

        for(int i = 0; i < s.size(); i++) {
            // add current character to window
            sCount[s[i] - 'a']++;

            // remove character if window size > k
            if(i >= k) {
                sCount[s[i - k] - 'a']--;
            }

            // compare window with p
            if(sCount == pCount) {
                ans.push_back(i - k + 1);
            }
        }

        return ans;
    }
};