class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;

        string word=words[0];
        sort(word.begin(),word.end());
        ans.push_back(words[0]);
        for(int i=1;i<words.size();i++)
        {
           string tempword = words[i];
           sort(tempword.begin(),tempword.end());
            if(word==tempword)
            continue;
            else
            {
                word=words[i];
                sort(word.begin(),word.end());
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};