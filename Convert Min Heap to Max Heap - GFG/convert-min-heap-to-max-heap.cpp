//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void convertMinToMaxHeap(vector<int> &arr, int N){
        for(int i=(N-1)/2;i>=0;i--){
            minheap(i,arr,N);
        }
    }
    void minheap(int i, vector<int> &arr,int N){
        int maxi=i;
        int l=2*i+1;
        int r=2*i+2;
        if(l<N && arr[l]>arr[maxi]){
            maxi=l;
        }
        if(r<N && arr[r]>arr[maxi]){
            maxi=r;
        }
        if(i!=maxi){
            swap(arr[maxi],arr[i]);
            minheap(maxi, arr, N);
        }
    }
    
};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        obj.convertMinToMaxHeap(vec,n);
        for(int i = 0;i<n;i++) cout << vec[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends