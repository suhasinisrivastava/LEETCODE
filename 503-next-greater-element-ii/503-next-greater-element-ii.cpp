class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        vector<int> v;
        for(int i=nums.size()-1;i>=0;i--){
            s.push(nums[i]);
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(s.top()!=nums[i] && nums[i]<s.top()){
                v.push_back(s.top());
                s.push(nums[i]);
            }
            else{
                while(s.empty()!=true){
                    s.pop();
                    if(s.empty()==true){
                        v.push_back(-1);
                        s.push(nums[i]);
                        break;
                    }
                    if(s.top()!=nums[i] && nums[i]<s.top()){
                       v.push_back(s.top());
                        s.push(nums[i]);
                        break;
                    }
                    
                        
                }
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};