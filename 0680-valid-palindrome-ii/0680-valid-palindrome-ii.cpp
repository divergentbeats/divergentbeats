class Solution {
public:
    bool validPalindrome(string s) {
        int left=0, right = s.size()-1;
        int flag=0;
        while(left<=right)
        {
            if(s[left]!=s[right])
            {
                if(flag==1)
                return false;
                int l= left+1,r=right;
                while(l<r && s[l]==s[r])
                l++,r--;
                if(l>=r)
                return true;

                l = left; r = right - 1;
                while(l < r && s[l] == s[r]) { l++; r--; }
                if(l >= r) return true;
                else
                return false;
            }
            else if(s[left]==s[right])
            left++,right--;
        }
        return true; 
    }
};