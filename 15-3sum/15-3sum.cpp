class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int X=0;
            vector<vector<int>>v;
        if(n<3){
            return v;
        }
    for(int i=0;i<n;i++){
        int low=i+1;
        int high=n-1;
        while(low<high && (i==0 || nums[i]!=nums[i-1])){
            int sum= nums[i]+nums[low]+nums[high];
            if(sum==X){
                v.push_back({nums[i],nums[low],nums[high]});
                low++;
                high--;
            
            }
            
            else if(sum<X){
                low++;
            }
            else if(sum>X){
                high--;
            }
        }
    }
    v.erase(unique(v.begin(),v.end()),v.end());
    return v;

    }
};