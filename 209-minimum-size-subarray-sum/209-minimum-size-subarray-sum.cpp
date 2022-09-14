class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,i=0,j=0,count=INT_MAX;
        while(i<nums.size()){
            sum+=nums[i];
            if(sum<target){
                i++;
            }
            else{
            while(sum>=target && j<nums.size()){
                count=min(count,i-j+1);
                sum-=nums[j ];
                j++;
            }
                i++;
                
                
                
            }
        }
        if(count==INT_MAX){
            return 0;
        }
        return count;
    }
};