class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int left=0, maxlen=0;

        for(int right=0;right<s.size();right++)
        {
            char ch=s[right];
            while(st.count(ch))
            {
                st.erase(s[left]);
                left++;
            }
            st.insert(ch);

            maxlen=max(maxlen,right-left+1);
        }

        return maxlen;
        
    }
};