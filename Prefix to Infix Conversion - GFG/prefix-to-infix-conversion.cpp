//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToInfix(string pre) {
        
        // Write your code here
        reverse(pre.begin(),pre.end());
        stack<string>s;
        int n=pre.size();
        for(int i=0;i<n;i++){
            if(isalpha(pre[i])){
                string curr;
                curr+=pre[i];
                s.push(curr);
            }
            else{
                string s1=s.top();
                s.pop();
                string s2=s.top();
                s.pop();
                string curr='('+s1+pre[i]+s2+')';
                s.push(curr);
            }
        }
        return s.top();
        
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends