class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int d=nums[nums.size()-1]-nums[0];
        int maxi,mini;
        for(int i=1;i<nums.size();i++){
            maxi=max(nums[i-1]+k,nums[nums.size()-1]-k);
            mini=min(nums[0]+k,nums[i]-k);
            d=min(d,maxi-mini);
        }
        return d;
        
    }
};