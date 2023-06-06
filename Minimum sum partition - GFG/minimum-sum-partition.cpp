//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
  bool func(int nums[],vector<vector<int>>&dp,int i, float target ){
    if(target==0){
        return true;
    }
    if(dp[i][target]!=-1){
        return dp[i][target];
    }
    if(i==0){
        return nums[0]==target;
    }
    bool nottaken=func(nums,dp,i-1,target);
    bool taken=false;
    if(nums[i]<=target){
        taken=func(nums,dp,i-1,target-nums[i]);
    }
    return dp[i][target]=nottaken||taken;
}
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	   
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    if(n==1){
	        return arr[0];
	    }
	     vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
	    
	    for(int i=0;i<=sum;i++){
	        func(arr,dp,n-1,i);
	    }
	    int mini=INT_MAX;
	    for(int i=0;i<=sum;i++){
	        if(dp[n-1][i]){
	            int a=abs(i-(sum-i));
	            mini=min(mini,a);
	        }
	    }
	    return mini;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends