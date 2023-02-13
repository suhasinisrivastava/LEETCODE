class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int s=arr.size();
        for(int i=0;i<arr.size()-1;i++){
             if(arr[i]==0){
                arr.insert(arr.begin()+i+1,0);
                i+=1;
                 cout<<i;
            }
            
        }
        if(arr[arr.size()-1]==0){
                arr.push_back(0);
            }
        while(arr.size()>s){
            arr.pop_back();
        }
    }
};