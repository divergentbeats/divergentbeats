class Solution {
public:
    int minDistance(string word1, string word2) {

        int n = word1.length();
        int m = word2.length();

        // dp[i][j] = minimum operations to convert
        // first i chars of word1 into first j chars of word2
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        // If word1 is empty
        // insert all chars of word2
        for(int j = 0; j <= m; j++)
            dp[0][j] = j;

        // If word2 is empty
        // delete all chars of word1
        for(int i = 0; i <= n; i++)
            dp[i][0] = i;

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                // Characters match
                if(word1[i - 1] == word2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else
                {
                    // Insert
                    int insertOp = dp[i][j - 1];

                    // Delete
                    int deleteOp = dp[i - 1][j];

                    // Replace
                    int replaceOp = dp[i - 1][j - 1];

                    dp[i][j] = 1 + min({insertOp, deleteOp, replaceOp});
                }
            }
        }

        return dp[n][m];
    }
};