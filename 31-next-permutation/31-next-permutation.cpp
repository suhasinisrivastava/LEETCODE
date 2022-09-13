class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int c;
        for(int k=nums.size()-2;k>=0;k--){
            if(nums[k]<nums[k+1]){
                c=k;
                break;
            }
        }
        if(c<0){
            reverse(nums.begin(),nums.end());
            return;
        }
        int l;
            for(int k=nums.size()-1;k>c;k--){
            if(nums[k]>nums[c]){
                l=k;
                break;
            }
        }
        
        
        if(l>=0){
            int temp=nums[l];
        nums[l]=nums[c];
        nums[c]=temp;
            
        }
        reverse(nums.begin()+c+1,nums.end());
        
        
    }
};