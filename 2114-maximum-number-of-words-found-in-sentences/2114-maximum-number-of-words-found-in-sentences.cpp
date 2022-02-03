class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count,j,words;
        int maxi=INT_MIN;
        vector<int> v;
        for(int i=0;i<sentences.size();i++){
            count=0;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    
                    count++;
                }
                
            }
            words=count+1;
            v.push_back(words);
            
        }
        sort(v.begin(),v.end());
        return v[v.size()-1];
    }
};