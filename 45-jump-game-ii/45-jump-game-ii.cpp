class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        if(nums[0]==0){
            return -1;
        }
        int i;
        int l=nums[0];
        int s=nums[0];
        int j=1;
        for(i=1;i<nums.size();i++){
            if(i==nums.size()-1){
                return j;
            }
            if(i+nums[i]>l){
                l=i+nums[i];
            }
            s--;
            if(s==0){
                if(l<=i){
                    return -1;
                }
                j++;
                s=l-i;
                
            }
        }
        return j;
    }
};