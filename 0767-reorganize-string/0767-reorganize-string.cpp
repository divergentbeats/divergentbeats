class Solution {
public:
    string reorganizeString(string s) {

        unordered_map<char,int> mp;

        // Count frequencies
        for(char ch : s)
            mp[ch]++;

        // Max heap -> {frequency, character}
        priority_queue<pair<int,char>> pq;

        for(auto it : mp)
        {
            pq.push({it.second, it.first});
        }

        string ans = "";

        // Previous character info
        int prevFreq = 0;
        char prevChar = '#';

        while(!pq.empty())
        {
            auto top = pq.top();
            pq.pop();

            int freq = top.first;
            char ch = top.second;

            // Add current character
            ans += ch;

            // Reduce frequency
            freq--;

            // Push previous character back if still remaining
            if(prevFreq > 0)
            {
                pq.push({prevFreq, prevChar});
            }

            // Store current as previous
            prevFreq = freq;
            prevChar = ch;
        }

        // If impossible
        if(ans.length() != s.length())
            return "";

        return ans;
    }
};