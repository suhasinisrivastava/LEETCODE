class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        unordered_map<string,int>ump;
        int count=0;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]++;
        }
        for(auto it :nums){
            string a=it;
            if(target.substr(0,a.length())==a){
                string b=target.substr(a.length());
                if(ump.find(b)!=ump.end()){
                    if(a==b){
                        count+=ump[b]-1;
                    }
                    else{
                        count+=ump[b];
                    }
                    
                }
            }
            cout<<count;
            
        }
        return count;
    }
};