class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        int maxend=0,s=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                s++;
            }
        }
        if(s==nums.size()){
            sort(nums.begin(),nums.end());
            return nums[nums.size()-1];
                
        }
        for(int i=0;i<nums.size();i++){
            maxend+=nums[i];
            if(maxend<0){
                maxend=0;
            }
            else if(maxend>max){
                max=maxend;
            }
        }
        return max;
    }
};