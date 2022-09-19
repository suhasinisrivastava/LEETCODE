class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int o=0;
        int z=0;
        int s=0,e=0,cnt=0;
        while(e<nums.size()){
            if(nums[e]==1){
                o++;
                e++;
            }
            else{
                z++;
                e++;
            }
            while(z>k){
                if(nums[s]==1){
                    o--;
                    s++;
                }
                else{
                    z--;
                    s++;
                }
            }
            cnt=max(cnt,o+z);
        }
        return cnt;
    }
};