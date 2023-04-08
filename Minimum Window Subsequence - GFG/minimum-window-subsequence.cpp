//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
// User function Template for C++

class Solution {
  public:
    string minWindow(string str1, string str2) {
        string r="";
        for(int i=0;i<str1.length();i++){
            int j=i;
            int k=0;
            while(j<str1.length() && k<str2.length()){
                if(str1[j]==str2[k]){
                    k++;
                }
                j++;
            }
            if(k==str2.length() && (r=="" || j-i<r.length())){
                r=str1.substr(i,j-i);
            }
        }
        return r;
    }
};


//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string str1, str2;
        cin >> str1 >> str2;

        Solution obj;
        cout << obj.minWindow(str1, str2) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends