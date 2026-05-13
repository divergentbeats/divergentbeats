class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
        return false;
        string ss = s + s;
        if(ss.find(goal)!=-1)
        return true;

        return false; 
    }
};