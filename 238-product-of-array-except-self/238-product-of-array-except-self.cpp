class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int c=0,sum=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c++;
            }
        }
        int t=1;
        if(c==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                    t*=nums[i];
                }
            }
        }
        for(int i=0;i<nums.size();i++){
            sum*=nums[i];
        }
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                v.push_back(sum/nums[i]);
            }
            else{
                if(c==1){
                    v.push_back(t);
                }
                else{
                    v.push_back(0);
                }
            }
        }
        return v;
    }
};