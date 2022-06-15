// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        sort(arr,arr+N);
        int count=1,maxi=0;
        for(int i=0;i<N;i++){
            if(arr[i]+1==arr[i+1] ){
                count++;
            }
            else if(arr[i]==arr[i+1] && count>1){
                continue;
            }
            else{
                maxi=max(maxi,count);
                count=1;
            }
        }
        return maxi;
      //Your code here
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends