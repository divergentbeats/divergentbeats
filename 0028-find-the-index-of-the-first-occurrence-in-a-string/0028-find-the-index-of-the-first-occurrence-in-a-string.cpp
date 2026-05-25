class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        if(m>n)
        return -1;

        for(int i=0;i<=n-m;i++)
        {
            string ch = haystack.substr(i, m);
            if(ch==needle)
            return i;
        }
        return -1;   
    }
};