class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        int begin=0,end=0,count=0;
        if(nums.size()==0){
            return v;
        }
        if(nums.size()==1){
            v.push_back(to_string((nums[begin])));
            return v;
        }
        for(int i=0;i<nums.size();i++){
            if(i!=nums.size()-1){
            if(nums[i+1]==nums[i]+1 && count==0){
                end++;
            }
           else if(begin==end && count==0){
                v.push_back(to_string((nums[begin])));
                begin++;
                end++;
            }
            else if(begin!=end && count==0){
                v.push_back((to_string(nums[begin])+"->"+to_string(nums[end])));
                begin=i+1;
                end=begin;
            }
            }
            else{
                if(begin!=end){
                    v.push_back((to_string(nums[begin])+"->"+to_string(nums[end])));
                    count++;
                    
                }
                else{
                    v.push_back(to_string((nums[begin])));
                    count++;
                    
                }
                
            }
        }
        return v;
    }
};