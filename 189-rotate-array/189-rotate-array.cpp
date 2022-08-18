class Solution {
public:
    void reversei(int i,int j, vector<int> &nums){
        while(i<=j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int temp=k%nums.size();
        if(k<0){
            k+=nums.size();
        }
       
        else if (nums.size()>temp){
        reversei(nums.size()-temp,nums.size()-1,nums);
        reversei(0,nums.size()-temp-1,nums);
        reversei(0,nums.size()-1,nums);
        }
        
        
    }
};