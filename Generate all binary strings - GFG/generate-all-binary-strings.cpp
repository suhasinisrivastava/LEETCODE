//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void unc(int num, string o){
        if(num==0){
            cout<<o<<" ";
            return;
        }
        unc(num-1,o+"0");
        if(o.back()!='1'){
            unc(num-1,o+'1');
        }
    }
    void generateBinaryStrings(int num){
        //Write your code
        unc(num,"");
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends