class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int i,j;
        for(i=0;i<nums.size();i++){
            int temp=0;
            while(nums[i]>0){
                nums[i]=nums[i]/10;
                temp++;
            }
            if(temp%2==0){
                count++;
            }
        }
        return count;
    }
};