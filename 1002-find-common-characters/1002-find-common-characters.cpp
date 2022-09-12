class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int>ump;
        for(int i=0;i<words[0].size();i++){
            ump[words[0][i]]++;
        }
        
        for(int i=1;i<words.size();i++){
            unordered_map<char,int>umpt;
            for(int j=0;j<words[i].size();j++ ){
                umpt[words[i][j]]++;
            }
            
            for(unordered_map<char,int>::iterator it=ump.begin();it!=ump.end();it++){
                (*it).second=min((*it).second,umpt[(*it).first]);
            }
            for(auto it:ump){
            cout<<it.first<<it.second;
        }
        }
        vector<string>v;
        for(auto &it:ump){
            while(it.second!=0){
                string t;
                t+=it.first;
                v.push_back(t);
                ump[it.first]--;
            }
        }
        return v;
    }
};