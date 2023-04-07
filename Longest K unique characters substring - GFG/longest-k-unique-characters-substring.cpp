//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
//aabacbebebe
class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int i=0,j=0,len=0,res=-1;
    unordered_map<char,int>ump;
    int n=s.size();
    while(j<n){
        ump[s[j]]++;
        if(ump.size()==k){
            len=j-i+1;
            res=max(res,len);
            j++;
        }
        else if(ump.size()<k){
            j++;
        }
        else{
            while(ump.size()>k){
                ump[s[i]]--;
                if(ump[s[i]]==0){
                    ump.erase(s[i]);
                    
                }
                i++;
                
            }
            j++;
        }
        
    }
    return res;
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends