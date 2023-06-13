//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
        int x=0;
        for(int i=0;i<n;i++){
            for(int k=0;k<n-x-1;k++){
                cout<<" ";
            }
            for(int j=0;j<=i;j++){
                cout<<'*'<<" ";
            }
            x++;
            cout<<'\n';
        }
        x=n;
        for(int i=n;i>0;i--){
            for(int k=0;k<n-x;k++){
                cout<<" ";
            }
            for(int j=0;j<i;j++){
                cout<<'*'<<" ";
            }
            
            x--;
            if(i!=0){
            cout<<'\n';
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends