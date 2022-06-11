class Solution {
public:
    int bin(vector<int> nums,int start,int end,int target){
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
    bool search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            nums.erase(unique(nums.begin(),nums.end()),nums.end());
        }
        if(nums.size()==1){
            if(nums[0]==target){
                return true;
            }
            else{
                return false;
            }
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
                ans=mid;
                break;
            }
            else if(nums[start]<=nums[mid] && nums[end]>=nums[mid]){
               ans= start;
                break;
            }
            else if(nums[start]<=nums[mid]){
                start=mid+1;
                int temp=(start+1)%n;
                int temp1=(start+n-1)%n;
                if(nums[start]<=nums[temp] && nums[start]<=nums[temp1]){
                    ans= start;
                    break;
                }
            }
            else if(nums[end]>=nums[mid]){
                end=mid-1;
                int temp=(end+1)%n;
                int temp1=(end+n-1)%n;
                if(nums[end]<=nums[temp] && nums[end]<=nums[temp1]){
                    ans= end;
                    break;
                }
            }
            
        }
        cout<<ans;
        int x,y;
        start=0,end=n;
        x=bin(nums,start,ans-1,target);
        start=0,end=n;
        y=bin(nums,ans,end-1,target);
        cout<<x<<endl<<y;
        if(x!=-1 || y!=-1){
            return true;
            
        }
        else{
            return false;
        }
        return false;
        
        
    
    }
};