class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>ump;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]++;
        }
        vector<int>v;
        for(auto it:ump){
            if(it.second>1){
                v.push_back(it.first);
            }
        }
        
        return v;
    }
};