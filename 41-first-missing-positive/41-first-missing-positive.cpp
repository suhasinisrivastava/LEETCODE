class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        
        int ans=0,u,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0){
                count++;
                u=i;
                
            }
            
        }
        cout<<u<<endl;
        if(count==1){
            nums.erase(nums.begin()+u);
        }
        else if(count>1){
            nums.erase(nums.begin(),nums.begin()+u+1);
        }
        for(int i=0;i<nums.size();i++){
            cout<<nums[i];
            
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1){
                ans=i+1;
                return i+1;
            }
            
        }
        
        return nums.size()+1;
    }
};