// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long max=INT_MIN,maxend=1,count=0;
        /*for(int i=0;i<n;i++){
            if(arr[i]<0){
                count++;
            }
        }
        if(count==n){
            max=arr[0];
            for(int j=0;j<n;j++){
                if(arr[j]>max){
                    max=arr[j];
                }
            }
        }*/
        
            for(int i=0;i<n;i++){
                maxend=arr[i];
                if(maxend==0){
                    continue;
                }
                for(int j=i+1;j<n;j++){
                    maxend*=arr[j];
                
                if(maxend>max){
                    max=maxend;
                }
                if(maxend==0){
                    break;
                }
                }
                
            }
            if(max==INT_MIN || max<0){
                sort(arr.begin(),arr.end());
                max=arr[arr.size()-1];
            }
        
    return max;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends