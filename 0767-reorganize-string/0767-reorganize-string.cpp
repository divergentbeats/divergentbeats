class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair<int,char>> pq;

        for(char ch: s)
        mp[ch]++;

        for(auto it: mp)
        pq.push({it.second,it.first});

        int prevfreq = 0;
        int freq = 0;
        char prevchar, letter;
        string ans = "";

        while(!pq.empty())
        {
           auto top = pq.top();
           pq.pop();

           freq = top.first;
           letter = top.second;

           ans+=letter;
           freq--;

           if(prevfreq > 0)
           pq.push({prevfreq, prevchar});

           prevfreq = freq;
           prevchar = letter;

        }

        if(ans.length()!=s.length())
        return "";


        return ans;
        
    }
};