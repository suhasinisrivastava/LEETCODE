class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int s=0;
        int e=0;
        int count=0,p=nums[0];
        while(s<nums.size() && e<nums.size()){
            if(p<k){
                e++;
                if(s<=e){
                    count+=e-s;
                }
                if(e<nums.size()){
                    p*=nums[e];
                }
            }
            else{
                p/=nums[s];
                s++;
                
            }
        }
        return count;
    }
};