class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i;
        for( i=0;i<t.length();i++){
            if(t[i]!=s[i] && i<s.length()){
                return t[i];
            }
            if(i==s.length()){
                return t[i];
            }
        }
        return t[i];
    }
};