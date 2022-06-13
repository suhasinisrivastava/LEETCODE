class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        if(nums.size()==1){
            return 0;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid>0 && mid<nums.size()-1){
                if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                    return mid;
                }
                else if(nums[mid-1]>nums[mid]){
                    high=mid-1;
                }
                else if(nums[mid+1]>nums[mid]){
                    low=mid+1;
                }
            }
            else if(mid==0){
                if(nums[mid]>nums[1]){
                    return 0 ;
                }
                else{
                    return 1;
                }
            }
            else if(mid==nums.size()-1){
                if(nums[mid]>nums[nums.size()-2]){
                    return nums.size()-1;
                }
                else{
                    return nums.size()-2;
                }
            }
        }
        return 0;
    }
};