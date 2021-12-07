class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        int i;
        int m=nums.size();
        for(i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
            }
        }
        for(i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
            }
        }
        for(int j=0;j<nums.size();j++){
            ans.push_back(nums[j]);
        }
        return ans.size();
    }
};