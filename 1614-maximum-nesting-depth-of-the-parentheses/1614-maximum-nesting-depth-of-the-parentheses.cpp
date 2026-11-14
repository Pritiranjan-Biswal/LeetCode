class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        int highest=0;
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='(') {
                highest++;
                maxi=max(maxi, highest);
            }
            else if(s[i]==')'){
                highest--;
            }

        }
        return maxi;
    }
};