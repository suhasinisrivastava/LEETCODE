class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int count=0,maxend=0,max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                count++;
            }
        }
        if(count==nums.size()){
            sort(nums.begin(),nums.end());
            max=nums[nums.size()-1];
        }
        else{
            for(int i=0;i<nums.size();i++){
                maxend+=nums[i];
                if(maxend<0){
                    maxend=0;
                }
                if(maxend>max){
                    max=maxend;
                }
            }
        }
        return max;
    }
};