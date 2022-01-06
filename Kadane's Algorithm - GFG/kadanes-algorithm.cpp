// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int maxend=0,max=0;
        int i,j,count=0;
        
        for(i=0;i<n;i++){
            if(arr[i]<0){
                count++;
            }
        }
        if(count==n){
            max=arr[0];
            for(j=0;j<n;j++){
                if(arr[j]>max){
                    max=arr[j];
                }
            }
        }
        else{
            
        for(i=0;i<n;i++){
            maxend+=arr[i];
            if(maxend<0){
                maxend=0;
                
            }
            if(maxend>max){
                    max=maxend;
                }
        }
        } 
        return max;
        }
        
        
    
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends