class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>ump;
        for(int i=0;i<magazine.length();i++){
            ump[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++){
            ump[ransomNote[i]]--;
        }
        for(auto i:ump){
            if(i.second<0){
                return false;
            }
 
        }
        return true;
    
    }
};
