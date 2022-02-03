class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int> v;
        unordered_map<char,int> u;
        for(int i=0;i<word1.length();i++){
            v[word1[i]]++;
        }
        for(int i=0;i<word2.length();i++){
            u[word2[i]]++;
        }
        for(auto x:v){
            int n=u[x.first];
                if((x.second-(n)>3 || x.second-(n)<-3)){
                    
                    return false;
                }
            }
        for(auto y:u){
            int n=v[y.first];
                if((y.second-(n)>3 || y.second-(n)<-3)){
                    
                    return false;
                }
            }
        
        return true;
    }
};