class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1,sum=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i] && count<2){
                sum++;;
                count++;
            }
            else if(nums[i-1]==nums[i] && count==2){
                nums.erase(nums.begin()+i);
                //nums.push_back('_');
                i--;
            }
            else if(nums[i-1]!=nums[i]){
                count=0;
                sum++;
                count++;
            }
        }
        
        return sum;
    }
};