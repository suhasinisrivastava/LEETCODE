class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
             vector<vector<int>>f;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int k=i+1;k<nums.size();k++){
            long long sum=(long long)target-nums[i]-nums[k];
            vector<int>v;
            int l=k+1;
            int r=nums.size()-1;
            while(l<r){
                if(nums[l]+nums[r]==sum){
                    v.push_back(nums[i]);
                    v.push_back(nums[k]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    f.push_back(v);
                    v.clear();
                    l++;
                    r--;
                }
                else if(nums[l]+nums[r]>sum){
                    r--;
                }
                else{
                    l++;
                }
            }
            }
        }
      sort(f.begin(),f.end());  f.erase(unique(f.begin(),f.end()),f.end());
        return f;
    }
};