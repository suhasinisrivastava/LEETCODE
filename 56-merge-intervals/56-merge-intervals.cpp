class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>v;
        v.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(v[v.size()-1][1]>=intervals[i][0] && intervals[i][1]>v[v.size()-1][1]){
                v[v.size()-1][1]=intervals[i][1];
            }
            else if(v[v.size()-1][1]>=intervals[i][0] && intervals[i][1]<=v[v.size()-1][1]){
                continue;
            }
            else{
                v.push_back(intervals[i]);
            }
        }
        return v;
    }
};