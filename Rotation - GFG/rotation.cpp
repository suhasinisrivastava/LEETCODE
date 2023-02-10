//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int nums[], int n) {
	    // code here
	    int l=0;
        int r=n-1;
        int mini=0;
        int ans=0;
        while(l<=r){
            int mid=(l+r)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            if(next<n && prev>=0){
                if(nums[mid]<=nums[prev] && nums[mid]<=nums[next]){
                    ans= mid;
                    break;
                }
                else if(nums[l]<=nums[mid] && nums[mid]<=nums[r]){
                    ans=l;
                    break;
                }
                else if(nums[l]<=nums[mid]){
                    l=mid+1;
                    int t=(l+n-1)%n;
                    int t2=(l+1)%n;
                    if(nums[l]<=nums[t] && nums[l]<=nums[t2]){
                        ans=l;
                        break;
                    }

                }
                else if(nums[r]>=nums[mid]){
                    r=mid-1;
                    int t=(r+n-1)%n;
                    int t2=(r+1)%n;
                    if(nums[r]<=nums[t] && nums[r]<=nums[t2]){
                        ans=r;
                        break;
                    }

                }
            
            }
        }
        
        return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends