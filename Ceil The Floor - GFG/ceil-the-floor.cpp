//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
        sort(arr,arr+n);
        int s=0;
        int e=n-1;
        int ans=INT_MIN;
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]==x){
                ans=mid;
                break;
            }
            else if(arr[mid]<x){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        
        int s1=0;
        int e1=n-1;
        int ans1=INT_MIN;
        while(s1<=e1){
            int mid=(s1+e1)/2;
            if(arr[mid]==x){
                ans1=mid;
                break;
                
            }
            else if(arr[mid]<x){
                
                s1=mid+1;
            }
            else{
                ans1=mid;
                e1=mid-1;
            }
        }
        if(ans==INT_MIN && ans1!=INT_MIN){
            return {-1,arr[ans1]};
        }
        else if(ans!=INT_MIN && ans1==INT_MIN){
            return {arr[ans],-1};
        }
        else if(ans!=INT_MIN && ans1!=INT_MIN){
            return {arr[ans],arr[ans1]};
        }
        return {-1,-1};
        
}