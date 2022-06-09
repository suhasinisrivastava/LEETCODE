class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,res=-1;
        vector<int> v;
        while(start<=end){
            int mid=(start+end)/2;
            if(target>nums[mid]){
                start=mid+1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                res=mid;
                end=mid-1;
            }
        }
        v.push_back(res);
        start=0,end=nums.size()-1;
        int res1=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(target>nums[mid]){
                start=mid+1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                res1=mid;
                start=mid+1;
            }
        }
         v.push_back(res1);
        return v;
    }
};