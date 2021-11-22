class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i,ans=-1;
        for(i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans=i;
                break;
            }
        }
        return ans;
    }
};