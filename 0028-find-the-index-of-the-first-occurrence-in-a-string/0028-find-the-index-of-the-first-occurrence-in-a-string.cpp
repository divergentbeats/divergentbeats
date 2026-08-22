class Solution {
public:
    int strStr(string haystack, string needle) {
        int p = needle.size();
        int n = haystack.size();
        for(int i=0;i<=n-p;i++)
        {
            int j = i, k=0;
            while(k<p)
            {
                if(haystack[j]!=needle[k])
                break;
                j++, k++;
            }
            if(k==p)
            return i;
        }
        return -1;     
    }
};