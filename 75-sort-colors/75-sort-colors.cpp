class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> ump;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(ump[0]>0){
                nums[i]=0;
                ump[0]--;
            }
            else if(ump[1]>0){
                nums[i]=1;
                ump[1]--;
            }
            else if(ump[2]>0){
                nums[i]=2;
                ump[2]--;
            }
        }
    }
};