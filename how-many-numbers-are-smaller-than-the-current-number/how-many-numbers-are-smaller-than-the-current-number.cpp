class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int i,j,count=0;
        for(i=0;i<nums.size();i++){
            for(j=0;j<nums.size();j++){
                if(i!=j && nums[j]<nums[i]){
                    count++;
                    
                }
                
            }
            ans.push_back(count);
            count=0;
        }
        return ans;
    }
};