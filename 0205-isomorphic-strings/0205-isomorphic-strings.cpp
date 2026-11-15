class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<int, int>mp1;
        unordered_map<int, int>mp2;
        for(int i=0; i<s.length(); i++) {
            char ch1=s[i];
            char ch2=t[i];
            if(mp1.find(ch1)!=mp1.end()) {
                if(mp1[ch1]!=ch2) {
                    return false;
                }
            }
            else {
                mp1[ch1]=ch2;
            }

            if(mp2.find(ch2)!=mp2.end()) {
                if(mp2[ch2]!=ch1) {
                    return false;
                }
            }
            else {
                mp2[ch2]=ch1;
            }
        }
        return true;
    }
};