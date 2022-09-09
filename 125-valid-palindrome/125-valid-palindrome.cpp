class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                t+=s[i];
            }
        }
        if(t.empty()==true){
            return true;
        }
        cout<<t;
        string r=t;
        reverse(r.begin(),r.end());
        if(t!=r){
            return false;
        }
        return true;
    }
};