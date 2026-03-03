class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int count=0;
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(auto &p : mp)
        {
           int freq=p.second;
            if(freq %2==0)
            count=count+freq;
            else
            {
                flag=1;
                count=count+(freq-1);
            }
        }
        if(flag==1)
        count=count+1;
        return count;

        
    }
};