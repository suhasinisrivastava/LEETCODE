//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int nums[], int n, int target) {
	    // code here
	    int s=0;
        int e=n-1;
        int ans=INT_MIN,ans1=INT_MIN;
        while(s<=e){
            int m=(s+e)/2;
            if(nums[m]==target){
                ans=m;
                e=m-1;
            }
            else if(nums[m]<target){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        int s1=0;
        int e1=n-1;
        while(s1<=e1){
            int m=(s1+e1)/2;
            if(nums[m]==target){
                ans1=m;
                s1=m+1;
            }
            else if(nums[m]<target){
                s1=m+1;
            }
            else{
                e1=m-1;
            }
        }
        if(ans==INT_MIN || ans1==INT_MIN){
            return 0;
        }
        return ans1-ans+1;
	}
};

//{ Driver Code Starts.

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
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends