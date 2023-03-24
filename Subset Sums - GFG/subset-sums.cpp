//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void subs(int i,int sum,vector<int>&ds,vector<int> &arr,vector<int>&ans,int n ){
        if(i==n){
            ans.push_back(sum);
            return;
        }
        
        
            ds.push_back(arr[i]);
            sum+=arr[i];
            subs(i+1,sum,ds,arr,ans,n);
            sum-=arr[i];
            ds.pop_back();
            subs(i+1,sum,ds,arr,ans,n);
            
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        vector<int>ds;
        subs(0,0,ds,arr,ans,N);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends