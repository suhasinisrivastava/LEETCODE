//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string postToPre(string pre) {
        // Write your code here
        //reverse(pre.begin(),pre.end());
        stack<string>s;
        for(int i=0;i<pre.size();i++){
            if(isalpha(pre[i])){
                string temp;
                temp+=pre[i];
                s.push(temp);
            }
            else{
                string s1=s.top();
                s.pop();
                string s2=s.top();
                s.pop();
                string temp=pre[i]+s2+s1;
                s.push(temp);
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
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends