class Solution {
public:
    int trap(vector<int>& height) {
        int maxl=INT_MIN;
        int maxr=INT_MIN;
        vector<int> v1;
        vector<int> v2;
        int sum=0;
        for(int i=0;i<height.size();i++){
            maxl=max(maxl,height[i]);
            v1.push_back(maxl);
            //cout<<maxl;
        }
        for(int i=height.size()-1;i>=0;i--){
            maxr=max(maxr,height[i]);
            v2.push_back(maxr);
            
            cout<<maxr<<endl;
        }
        reverse(v2.begin(),v2.end());
        for(int i=0;i<height.size();i++){
            v1[i]=min(v1[i],v2[i])-height[i];
        }
        for(int i=0;i<height.size();i++){
            sum+=v1[i];
        }
        return sum;
        
        
        
        
        
    }
};