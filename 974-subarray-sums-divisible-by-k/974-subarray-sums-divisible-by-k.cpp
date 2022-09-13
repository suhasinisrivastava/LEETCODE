class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>ump;
        int sum=0,count=0;
        ump[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0){
                rem+=k;
            }
            if(ump[rem]){
                count+=ump[rem];
            }
            ump[rem]++;
        }
            
        return count;
        
    }
};