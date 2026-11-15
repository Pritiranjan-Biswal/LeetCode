class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string>mp1;
        unordered_map<string, char>mp2;
        stringstream ss(s);
        string word;
        vector<string>words;
        while (getline(ss, word, ' ')) {
            words.push_back(word);
        }
        if(words.size()!=pattern.size()) {
            return false;
        }
        for(int i=0; i<words.size(); i++) {
            char ch1=pattern[i];
            string ch2=words[i];
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