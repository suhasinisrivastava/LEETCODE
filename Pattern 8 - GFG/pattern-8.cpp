//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    int x=n;
        for(int i=2*n-1;i>=0;i-=2){
            for(int k=0;k<n-x;k++){
                cout<<" ";
            }
            for(int j=0;j<i;j++){
                cout<<'*';
            }
            
            x--;
            cout<<'\n';
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends