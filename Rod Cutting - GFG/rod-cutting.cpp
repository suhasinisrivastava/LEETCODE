//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int func(vector<vector<int>>&dp, int price[],int i, int n){
      if(i==0){
          return n*price[0];
      }
      if(dp[i][n]!=-1){
          return dp[i][n];
      }
      int nottaken=func(dp,price,i-1,n);
      int taken=INT_MIN;
      int l=i+1;
      if(l<=n){
          taken=func(dp,price,i,n-l)+price[i];
      }
      return dp[i][n]= max(taken,nottaken);
  }
    int cutRod(int price[], int n) {
        //code here
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return func(dp,price,n-1,n);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends