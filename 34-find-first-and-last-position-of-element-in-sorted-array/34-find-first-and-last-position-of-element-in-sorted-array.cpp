class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=-1,d=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target && s==-1){
                s=i;
            }
            else if(nums[i]==target && s!=-1){
                d=i;
            }
        }
        if(s!=-1 && d==-1){
            d=s;
        }
        vector<int>v;
        v.push_back(s);
        v.push_back(d);
        return v;
    }
};