class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> v;
        vector<int> r;
        vector<int> s;
        vector<int> q;
        vector<int> t;
        int count,min,x;
        for(int i=0;i<mat.size();i++){
            count =0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            v.push_back(count);
        }
        for(int i=0;i<v.size();i++){
            s.push_back(v[i]);
        }
        sort(s.begin(),s.end());
        for(int i=0;i<k;i++){
            for(int j=0;j<v.size();j++){
                if(s[i]==v[j]){
                    q.push_back(j);
                    v[j]=-1;
                    break;
                }
            }
        }
        /*for(int i=0;i<k;i++){
            t.push_back(q[i]);
        }*/
    return q;
    }
    
};