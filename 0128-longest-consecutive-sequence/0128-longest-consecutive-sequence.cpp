class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int count=0;
        int max=0;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;
        for(auto &p:mp)
        {
            if (mp.find(p.first-1)==mp.end())
            {
                int current=p.first;
                count=1;
                while(mp.find(current+1)!=mp.end())
                count++,current++;
            }
            if(count>max)
            max=count;

        }
        return max;
    }
};