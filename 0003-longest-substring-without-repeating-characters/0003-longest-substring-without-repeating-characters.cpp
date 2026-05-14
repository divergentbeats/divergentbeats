class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxLen = 0;
        unordered_set<char> st;
        for(int right = 0 ; right< s.length(); right++)
        {
            char ch = s[right];
            while(st.count(ch))
            {
                st.erase(s[left]);
                left++;
            }
            st.insert(ch);
            maxLen = max(maxLen, right - left + 1);

        }
        return maxLen;
        
    }
};