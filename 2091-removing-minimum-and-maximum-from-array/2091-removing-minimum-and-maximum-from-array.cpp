class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        int m,n,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxi){
                m=i;
            }
            if(nums[i]==mini){
                n=i;
            }
        }
        if(m<n){
        int front=m+1;
        int back=nums.size()-n;
            if(front<=back){
            count+=front;
            nums.erase(nums.begin(),nums.begin()+m);
            front=n-m;
            if(front<=back){
                count+=front;
            }
            else{
                count+=back;
                

            }
        }
        else{
            count+=back;
            back=n-m;
            if(front<=back){
                count+=front;
            }
            else{
                count+=back;
                

            }
            
        }
        }
        else{
            int front=n+1;
        int back=nums.size()-m;
        
        if(front<=back){
            count+=front;
            nums.erase(nums.begin(),nums.begin()+n);
            front=m-n;
            if(front<=back){
                count+=front;
            }
            else{
                count+=back;
                

            }
        }
        else{
            count+=back;
            back=m-n;
            if(front<=back){
                count+=front;
            }
            else{
                count+=back;
                

            }
            
        }
        }
        
            
        return count;
    }
};