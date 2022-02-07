class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> t;
        for(int i=0;i<s.length();i++){
            t[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(t[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};