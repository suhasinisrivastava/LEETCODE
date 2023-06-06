//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int func(int val[], int wt[], vector<vector<int>>&dp,int W, int i){
        if(i==0){
            if(wt[0]<=W){
                return val[0];
            }
            return 0;
        }
        if(dp[i][W]!=-1){
            return dp[i][W];
        }
        int nottaken=func(val,wt,dp,W,i-1);
        int taken=0;
        if(wt[i]<=W){
            taken=func(val,wt,dp,W-wt[i],i-1)+val[i];
        }
        return dp[i][W]=max(taken,nottaken);
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
       return func(val,wt,dp,W,n-1);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends