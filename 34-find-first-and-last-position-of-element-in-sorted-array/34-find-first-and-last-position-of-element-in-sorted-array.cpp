class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=-1,d=-1;
        int l=0,r=nums.size()-1;
        vector<int>v;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                s=mid;
                r=mid-1;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        l=0;r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                d=mid;
                l=mid+1;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        v.push_back(s);
        v.push_back(d);
        return v;
            
    }
};