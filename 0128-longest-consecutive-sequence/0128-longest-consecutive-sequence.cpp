class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=0,max=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;
        for(auto &p:mp)
        {
          if(mp.find(p.first-1)==mp.end())
          {
            int freq=p.first;
            count=0;
            while(mp.find(freq)!=mp.end())
            freq++,count++;
            if(count>max)
            max=count;
          }
        }
        return max; 
    }
};