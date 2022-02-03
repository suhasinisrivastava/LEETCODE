class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        vector<string> r=words;
        vector<string> s;
        for(int i=0;i<words.size();i++){
            reverse(words[i].begin(),words[i].end());
            
        }
        for(int i=0;i<words.size();i++){
            if(words[i]==r[i]){
                return words[i];
            }
        }
        return "";
        
    }
};