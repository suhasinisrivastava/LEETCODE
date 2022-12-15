//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  long long sum=0;
    long long sumOfSeries(long long N) {
        // code here
        /*if(N>0){
            sum+=N*N*N;
            sumOfSeries(N-1);
        }*/
        sum=(N*(N+1))/2;
        sum=sum*sum;
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends