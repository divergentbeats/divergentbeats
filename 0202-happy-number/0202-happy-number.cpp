class Solution {
    unordered_set<int> st;
public:
    bool isHappy(int n) {
        
        if(st.find(n)!=st.end())
        return false;
        st.insert(n);
       int s = n, sum = 0;
       while(s>0)
       {
        int x = s % 10;
        sum+=(x*x);
        s/=10;
       }
        
       
       if(sum==1)
       return true;
       
       return isHappy(sum);
        
    }
};