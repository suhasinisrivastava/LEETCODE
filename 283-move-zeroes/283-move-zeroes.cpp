class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
               v.push_back(nums[i]);
            }
            else{x++;
                }
        }
        for(int i=0;i<v.size();i++){
            nums[i]=v[i];
        }
    
        for(int i=v.size();i<nums.size();i++){
            nums[i]=0;
        }
    }
};