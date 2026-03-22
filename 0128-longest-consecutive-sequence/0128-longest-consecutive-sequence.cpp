class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int count=0, max=0;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;
        for(auto &p:mp)
        {
            int num=p.first;
            if(mp.find(p.first-1)==mp.end())
            {
                int current=num;
                count=1;
                while(mp.find(current+1)!=mp.end())
                {
                    count++;
                    current++;
                }
                if(count>max)
                max=count;
                count=0;
            }
        }
        return max;     
    }
};