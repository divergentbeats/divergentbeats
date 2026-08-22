class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int p = needle.size();
        for(int i=0;i<=n-p;i++)
        {
            string s = haystack.substr(i,p);
            if(s==needle)
            return i;
        }   
        return -1;
    }
};