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
        int count=1,res=1;
        sort(arr,arr+N);
        for(int i=0;i<N;i++){
            if(arr[i]+1==arr[i+1] || arr[i]==arr[i+1]){
                if(arr[i]+1==arr[i+1]){
                count++;
                res=max(res,count);}
            }
            else{
                count=1;
            }
        }
        return res;
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