class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        int n=word.size();
        for(int i=0;i<word.size();i++)
        {
            if(word[i]==toupper(word[i]))
            count++;
        }
        if(count==0 || count==n)
        return true;
        else if(count==1 && word[0]==toupper(word[0]))
        return true;

        return false;
        
    }
};