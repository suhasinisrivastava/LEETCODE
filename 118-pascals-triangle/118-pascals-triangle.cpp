class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
       v[0].push_back(1);
        if(numRows==1){
            return v;
        }
        v[1].push_back(1);
        v[1].push_back(1);
        if(numRows==2){
            return v;
        }
        
        for(int i=2;i<numRows;i++){
            for(int j=0;j<v[i-1].size();j++){
                if(j==0){
                    v[i].push_back(v[i-1][j]);
                }
                else if(j==(v[i-1].size()-1)){
                    v[i].push_back(v[i-1][j]+v[i-1][j-1]);
                    v[i].push_back(v[i-1][j]);
                }
                else{
                    v[i].push_back(v[i-1][j]+v[i-1][j-1]);
                }
            }
        }
        return v;
    }
};