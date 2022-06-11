class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<pair<int,int>> v;
        int s=0;
        int e=nums.size()-1;
        if(target<=nums[0]){
            return 0;
        }
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]<target){
                v.push_back({nums[mid],mid});
            }
            if(nums[mid]>=target){
                e=mid-1;
                
            }
            else if(nums[mid]<=target){
                s=mid+1;
            }
        }
        sort(v.begin(),v.end());
        int ans=v[v.size()-1].second+1;
        return ans;
        //return v[nums.size()-1].second;
    }
};