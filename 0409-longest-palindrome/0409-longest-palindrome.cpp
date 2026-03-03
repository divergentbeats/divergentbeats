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
        for(int i=0;i<mp.size();i++)
        {
            
            if(mp[i]%2==0)
            count=count+mp[i];
            else
            {
                flag=1;
                count=count+(mp[i]-1);
            }
        }
        if(flag==1)
        count=count+1;
        return count;

        
    }
};