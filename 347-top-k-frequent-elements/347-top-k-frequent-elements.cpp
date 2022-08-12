class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> maxq;
        for(auto e:ump){
            maxq.push({e.second,e.first});
            if(maxq.size()>k){
                maxq.pop();
            }
        }
        vector<int>v;
        while(maxq.empty()!=true){
            v.push_back(maxq.top().second);
            maxq.pop();
        }
        return v;
    }
};