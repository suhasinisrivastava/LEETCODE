class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        vector<int> v;
        for(int i=nums2.size()-1;i>=0;i--){
            if(s.empty()==true){
                v.push_back(-1);
                s.push(nums2[i]);
                cout<<s.top();
                cout<<nums2[i];
                
            }
            else if(s.top()>nums2[i]){
                v.push_back(s.top());
                s.push(nums2[i]);
                cout<<nums2[i];
            }
            else if(s.top()<nums2[i]){
                    cout<<nums2[i];
                    while(s.empty()!=true){
                        s.pop();
                        
                        if(s.empty()==true){
                            v.push_back(-1);
                            cout<<nums2[i];
                            s.push(nums2[i]);
                            
                            break;
                            
                        }
                        if(s.top()>nums2[i]){
                            v.push_back(s.top());
                            s.push(nums2[i]);
                            cout<<nums2[i];
                            
                            break;
                        }
                    }
                    
                
            }
        }
        vector<int> b;
        reverse(v.begin(),v.end());
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    b.push_back(v[j]);
                }
            }
        }
        return b;
    }
};