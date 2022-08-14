class Solution {
public:
    bool p(int i, string&s){
        if(i>=s.size()){
            return true;
        }
        if(s[i]!=s[s.size()-i-1]){
            return false;
        }
        return p(i+1,s);
    }
    bool isPalindrome(int x) {
        string s=to_string(x);
         return p(0,s);
    }
};