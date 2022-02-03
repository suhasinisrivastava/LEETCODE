class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> v;
        unordered_map<string,int> u;
        int count=0;
        for(int i=0;i<words1.size();i++){
            v[words1[i]]++;
        }
        for(int i=0;i<words2.size();i++){
            u[words2[i]]++;
        }
        for(auto x:v){
            for(auto y:u){
                if(x.second==1 && y.second==1 && x.first==y.first ){
                    count++;
                 }
            }
        }
        
         return count;   
        }
    
};