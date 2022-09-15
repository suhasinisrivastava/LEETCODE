class Solution {
public:
    void rev(int i, int j, vector<int>&nums){
        while(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int size=k%nums.size();
        if(k<0){
            k+=nums.size();
        }
        else if(nums.size()>size){
            rev(nums.size()-size,nums.size()-1,nums);
            rev(0,nums.size()-size-1,nums);
            rev(0,nums.size()-1,nums);
        }
    }
};