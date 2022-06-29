class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> m;
        vector<int>v;
        int count=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            if(x.second>nums.size()/3){
                count=x.first;
                v.push_back(count);
            }
        }
        return v;
    }
    
};