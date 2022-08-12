class Solution {
public:
    
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>v;
        priority_queue<pair<int,int>> maxq;
        for(int i=0;i<arr.size();i++){
            maxq.push({abs(arr[i]-x),arr[i]});
            if(maxq.size()>k){
                maxq.pop();
            }
        }
        while(maxq.empty()==false){
            v.push_back(maxq.top().second);
            maxq.pop();
        }
        sort(v.begin(),v.end());
        return v;
        
        
    }
};