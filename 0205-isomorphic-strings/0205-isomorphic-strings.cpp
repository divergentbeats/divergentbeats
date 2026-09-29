class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1; // s -> t
        unordered_map<char, char> mp2; // t -> s

        for(int i = 0; i < s.size(); i++) {

            // s[i] already has a mapping
            if(mp1.count(s[i])) {
                if(mp1[s[i]] != t[i])
                    return false;
            }

            // t[i] already has a mapping
            if(mp2.count(t[i])) {
                if(mp2[t[i]] != s[i])
                    return false;
            }

            // create the mappings
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }

        return true;
    }
};