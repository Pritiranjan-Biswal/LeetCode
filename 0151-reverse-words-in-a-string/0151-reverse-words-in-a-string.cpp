class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        string ans="";
        for(int i=0; i<s.size(); i++) {
            if(s[i]!=' ') {
                ans+=s[i];
            }
            else {
                if(ans!="") {
                    words.push_back(ans);
                    ans="";
                }
            }
        }
        if(ans!="") {
            words.push_back(ans);
        }
        string temp="";
        for(int i=words.size()-1; i>=0; i--) {
            temp+=words[i];
            if(i!=0) {
                temp+=" ";
            }
        }
        return temp;
    }
};