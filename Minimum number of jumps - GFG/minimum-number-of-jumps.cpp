// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int jumps=0;
        int currend=0,maxreach=0,ladder=0;
        if(arr[0]==0 && n==1){
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            maxreach=max(maxreach,arr[i]+i);
            if(maxreach>=n-1){
                return 1+jumps;
            }
            if(i==maxreach){
                return -1;
            }
            if(i==currend){
                jumps++;
                currend=maxreach;
            }
        }
        return jumps;
        
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends