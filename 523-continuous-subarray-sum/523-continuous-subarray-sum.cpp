class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        int sum=0;
        if(nums.size()==1){
            return false;
        }
        int c=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0){
                rem+=k;
            }
            if(rem==0 && c!=INT_MIN){
                return true;
            }
            
            if(ump.find(rem)!=ump.end()){
                if(i-ump[rem]>=2){
                    return true;
                }
            }
            if(ump.find(rem)!=ump.end()){
            ump[rem]=min(i,ump[rem]);
                
            }
                else{
                    ump[rem]=i;
                    c=ump[rem];
                }
            }
        for(auto it:ump){
            cout<<it.first<<" "<<it.second;
        }
        
        return false;
    }
};