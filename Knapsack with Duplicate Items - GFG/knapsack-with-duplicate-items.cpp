//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int func(vector<vector<int>>&dp, int val[], int wt[], int W, int i){
    if(i==0){
        if(wt[0]<=W){
            return ((int)(W/wt[0]))*val[0];
        }
        return 0;
    }
    if(dp[i][W]!=-1){
        return dp[i][W];
    }
    int nottaken=func(dp,val,wt,W,i-1);
    int taken=0;
    if(wt[i]<=W){
        taken=val[i]+func(dp,val,wt,W-wt[i],i);
    }
    return dp[i][W]=max(nottaken,taken);
}
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>>dp(N+1, vector<int>(W+1,-1));
        return func(dp,val,wt,W,N-1);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends