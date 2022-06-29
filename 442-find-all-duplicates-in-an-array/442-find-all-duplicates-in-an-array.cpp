class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        sort(nums.begin(),nums.end());
        int c=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                c++;
                if(c==2){
                    //cout<<1;
                    v.push_back(nums[i-1]);
                    c=1;
                }
            }
           
            else{
                if(c==2){
                    cout<<1;
                    v.push_back(nums[i-1]);
                    c=1;
                }
            }
        }
        return v;
        
    }
};