class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {

        unordered_set<string> st(wordDict.begin(), wordDict.end());

        int n = s.length();

        // dp[i] = can substring s[0...i-1] be segmented?
        vector<bool> dp(n + 1, false);

        dp[0] = true;

        for(int i = 1; i <= n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                // If first part is valid
                // and second part exists in dictionary
                if(dp[j] && st.count(s.substr(j, i - j)))
                {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};