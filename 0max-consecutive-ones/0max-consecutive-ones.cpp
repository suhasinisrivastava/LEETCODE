class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int r=0;
        int l=0;
        int maxi=0;
        while(r<nums.size()){
            if(nums[r]==1){
                c++;
            }
            else{
                maxi=max(maxi,c);
                c=0;
            }
            r++;
        }
        maxi=max(maxi,c);
        return maxi;
    }
};