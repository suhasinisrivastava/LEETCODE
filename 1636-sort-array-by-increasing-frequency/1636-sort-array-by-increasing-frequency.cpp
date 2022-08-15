class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> ump;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]++;
        }
        priority_queue<pair<int,int>> maxq;
        for(auto e:ump){
            
                maxq.push({-e.second,e.first});
            
            
        
        }
        vector<int>v;
        while(maxq.empty()!=true){
            for(int i=0;i<abs(maxq.top().first);i++){
                v.push_back(maxq.top().second);
            }
            maxq.pop();
        }
        return v;
    }
};