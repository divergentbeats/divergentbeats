class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0, num=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[num]++;  

            num+=nums[i];
            if(mp.find(num-k)!=mp.end())
            count+=mp[num-k];

        }
        return count; 
    }
};