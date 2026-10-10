class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> num;
        int ans=0;
        for(int i=start;num.size()<n;i+=2)
        {
            num.push_back(i);
            ans^=i;   
        }
        return ans; 
    }
};