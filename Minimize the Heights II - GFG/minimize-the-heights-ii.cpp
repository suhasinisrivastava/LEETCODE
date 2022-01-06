// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int res=arr[n-1]-arr[0];
        int small=arr[0]+k;
        int big=arr[n-1]-k;
        int i;
        for(i=0;i<n-1;i++){
            int maxa=max(arr[i]+k,big);
            int mina=min(arr[i+1]-k,small);
            if(mina<0){
                continue;
            }
            else{
            res=min(res,maxa-mina);
            }
        }
        return res;
    } 
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends