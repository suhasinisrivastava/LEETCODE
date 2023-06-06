//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool func(int i, int target,vector<vector<int>>&dp,vector<int>arr ){
        if(target==0){
            return true;
        }
        if(dp[i][target]!=-1){
            return dp[i][target];
        }
        if(i==0){
            if(arr[0]==target){
                return true;
            }
            else{
                return false;
            }
        }
        bool nottaken=func(i-1,target,dp,arr);
        bool taken=false;
        if(arr[i]<=target){
            taken=func(i-1,target-arr[i],dp,arr);
        }
        return dp[i][target]=taken||nottaken;
        
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        vector<vector<int>>dp(arr.size()+1,vector<int>(sum+1,-1));
        return func(arr.size()-1,sum,dp,arr);
        
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends