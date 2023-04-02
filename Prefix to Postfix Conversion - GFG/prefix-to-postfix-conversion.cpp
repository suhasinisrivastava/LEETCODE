//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToPost(string pre) {
        reverse(pre.begin(),pre.end());
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
                string temp=s1+s2+pre[i];
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
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToPost(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends