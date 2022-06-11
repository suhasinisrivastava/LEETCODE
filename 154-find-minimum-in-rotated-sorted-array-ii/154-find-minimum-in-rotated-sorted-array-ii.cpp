class Solution {
public:
    int findMin(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums.erase(unique(nums.begin(),nums.end()),nums.end());
        }

        int start=0;
        int end=nums.size()-1;
        int n=nums.size();
        int mid,ans;
        while(start<=end){
            mid=(start+end)/2;
            int next=(mid+1)%n;
            int pre=(mid+n-1)%n;
            if(nums[mid]<=nums[next] && nums[mid]<=nums[pre]){
                return nums[mid];
            }
            else if(nums[start]<=nums[mid] && nums[end]>=nums[mid]){
               return nums[start];
            }
            else if(nums[start]<=nums[mid]){
                start=mid+1;
                int temp=(start+1)%n;
                int temp1=(start+n-1)%n;
                if(nums[start]<=nums[temp] && nums[start]<=nums[temp1]){
                    return nums[start];
                }
            }
            else if(nums[end]>=nums[mid]){
                end=mid-1;
                int temp=(end+1)%n;
                int temp1=(end+n-1)%n;
                if(nums[end]<=nums[temp] && nums[end]<=nums[temp1]){
                    return nums[end];
                }
            }
            
        }
        return nums[mid];
    }
};