class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> v;
        sort(intervals.begin(),intervals.end());
        v.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(v[v.size()-1][1]>=intervals[i][0] && intervals[i][1]>v[v.size()-1][1]){
                v[v.size()-1][1]=intervals[i][1];
                
            }
            else if(intervals[i][0]<=v[v.size()-1][1] && intervals[i][1]<=v[v.size()-1][1] ){
                continue;
            }
            else{
                v.push_back(intervals[i]);
            }
        }
        return v;
    }
};