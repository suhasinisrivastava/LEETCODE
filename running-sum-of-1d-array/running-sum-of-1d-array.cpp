class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int i;
        ans.push_back(nums[0]);
        for(i=1;i<nums.size();i++){
            ans.push_back(nums[i]+ans[i-1]);
        }
        return ans;
    }
};