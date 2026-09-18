class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),0);
        stack<int> s;
        for(int i=0;i<temperatures.size();i++)
        {
            int temp=temperatures[i];
            while(!s.empty() && temp>temperatures[s.top()])
            {
                ans[s.top()]= i-s.top();
                s.pop();
            }
            s.push(i); 
        }
        return ans; 
    }
};