// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int ladder=arr[0];
        int stair=arr[0];
        int jump=1,level;
        if(n==1){
            return 0;
        }
        if(ladder==0){
            return -1;
        }
        for(level=1;level<n;level++){
            if(level==n-1){
                return jump;
            }
            if(arr[level]+level>ladder){
                ladder=arr[level]+level;
            }
            stair--;
            if(stair==0){
                if(ladder<=level){
            return -1;
        }
                jump++;
                stair=ladder-level;
            }
        }
        
        return jump;
        
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