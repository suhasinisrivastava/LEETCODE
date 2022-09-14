class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>f;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            vector<int>v;
            int l=i+1;
            int r=nums.size()-1;
            while(l<r && (i==0 || nums[i]!=nums[i-1])){
                if(nums[l]+nums[i]+nums[r]==0){
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    f.push_back(v);
                    v.clear();
                    l++;
                    r--;
                }
                else if(nums[l]+nums[i]+nums[r]>0){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        f.erase(unique(f.begin(),f.end()),f.end());
        return f;
    }
};