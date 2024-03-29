//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool pos(int n, int k, int A[],int mid){
        int s=1;
        int c=0;
        for(int i=0;i<n;i++){
            if(A[i]>mid){
                return false;
            }
            if(c+A[i]>mid){
                s++;
                c=A[i];
                if(s>k){
                    return false;
                }
            }
            else{
                c+=A[i];
            }
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        int res=INT_MAX;
        if(N<M){
            return -1;
        }
        int mini=0;
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
        }
        int maxi=sum;
        while(mini<=maxi){
            int mid=(mini+maxi)/2;
            if(pos(N,M,A,mid)){
                res=mid;
                maxi=mid-1;
                
            }
            else{
                mini=mid+1;
            }
        }
        return res;
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends