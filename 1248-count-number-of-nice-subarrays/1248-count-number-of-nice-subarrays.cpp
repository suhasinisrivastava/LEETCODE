class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        
        int left = 0;
        int count = 0;
        int temp=0;
        int right=0;
        int cnt=0;
        while(right<nums.size()){
            if(nums[right]%2!=0){
                temp++;
            }
            if(nums[right]%2==0 && temp==k){
                count+=cnt;
                right++;
                continue;
            }
            if(temp<k){
                right++;
            }
            else if(temp==k){
                while(temp==k){
                    cnt++;
                    if(nums[left]%2==0){
                        left++;
                        continue;
                    }
                    else{
                        break;
                    }
                }
                right++;
                count+=cnt;
            }
            else if(temp>k){
                temp-=2;
                left++;
                cnt=0;
            }
        }
        return count;

    }
};