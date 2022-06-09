class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        if(nums.size()==1){
            if(target==nums[0]){
                return 0;
            }
            else{
                return -1;
            }
        }
        if(nums.size()==2){
            if(nums[0]==target){
                return 0;
            }
            else if(nums[1]==target){
                return 1;
            }
            else{
                return -1;
            }
        }
        while(start<=end){
            int mid=(start+end)/2;
            if(target>nums[mid]){
                start=mid+1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
        
        
    }
};