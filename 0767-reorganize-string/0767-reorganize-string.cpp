class Solution {
public:
    string reorganizeString(string s) {

        unordered_map<char, int> mp;

        for(char ch:s)
        mp[ch]++;

        priority_queue<pair<int, char>> pq;

        for(auto it:mp)
        pq.push({it.second, it.first});

        int prevfreq = 0;
        char prevc = '#';

        int freq = 0;
        char ch;
        string ans = "";

        while(!pq.empty())
        {
            auto top = pq.top();
            pq.pop();

            freq = top.first;
            ch = top.second;

            ans+=ch;
            freq--;

            if(prevfreq > 0)
            pq.push({prevfreq, prevc});

            prevfreq = freq;
            prevc = ch;
        }
        if(ans.length()!=s.length())
        return "";

        return ans;  
    }
};