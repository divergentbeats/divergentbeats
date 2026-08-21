class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        int maxlen=0, count=1;
        for(int i:st)
        {
            if(!st.count(i-1))
            {
            count=1;
            int x=i;
            while(st.count(x+1))
            {
            count++;
            x++;
            }
            maxlen=max(maxlen,count);
            }
        }
        return maxlen;
    }
};