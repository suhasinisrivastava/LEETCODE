//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool pos(int n, int k, vector<int> &stalls,int mid){
        int c=1;
        int l=stalls[0];
        for(int i=1;i<n;i++){
            if(stalls[i]-l>=mid){
                c++;
                l=stalls[i];
            }
            
        }
        return c>=k;
    }
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int mini=1;
        int maxi=stalls[stalls.size()-1]-stalls[0];
        while(mini<=maxi){
            int mid=(mini+maxi)/2;
            if(pos(n,k,stalls,mid)){
                mini=mid+1;
            }
            else{
                maxi=mid-1;
            }
        }
        return maxi;
    
        // Write your code here
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends