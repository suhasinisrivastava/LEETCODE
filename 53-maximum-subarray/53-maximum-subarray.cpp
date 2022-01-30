class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        int max_end=0;
        for(int i=0;i<nums.size();i++){
            max_end+=nums[i];
            if(max_end>max){
                max=max_end;
            }
            if(max_end<0){
                max_end=0;
            }
        }
        return max;
    }
};