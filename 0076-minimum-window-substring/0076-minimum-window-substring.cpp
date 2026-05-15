class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> need;
        unordered_map<char, int> window;

        // Frequency of characters in t
        for(char ch : t)
        {
            need[ch]++;
        }

        int required = need.size();
        int formed = 0;

        int left = 0;
        int minLen = INT_MAX;
        int startIndex = 0;

        for(int right = 0; right < s.size(); right++)
        {
            char ch = s[right];

            // Add current character to window
            window[ch]++;

            // Check if current character satisfies frequency
            if(need.count(ch) &&
               window[ch] == need[ch])
            {
                formed++;
            }

            // Try shrinking window
            while(formed == required)
            {
                // Update minimum window
                if(right - left + 1 < minLen)
                {
                    minLen = right - left + 1;
                    startIndex = left;
                }

                char leftChar = s[left];

                // Remove left character
                window[leftChar]--;

                // Window becomes invalid
                if(need.count(leftChar) &&
                   window[leftChar] < need[leftChar])
                {
                    formed--;
                }

                left++;
            }
        }

        if(minLen == INT_MAX)
        {
            return "";
        }

        return s.substr(startIndex, minLen);
    }
};