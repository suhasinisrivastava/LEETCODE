// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //
            
            vector<int> a;
            a.push_back(A[0]);
            for(int i=1;i<n1;i++){
                if(a[a.size()-1]!=A[i]){
                    a.push_back(A[i]);
                }
            }
            //return a;
            vector<int> b;
            b.push_back(B[0]);
            for(int i=1;i<n2;i++){
                if(b[b.size()-1]!=B[i]){
                    b.push_back(B[i]);
                }
            }
            vector<int> c;
            c.push_back(C[0]);
            for(int i=1;i<n3;i++){
                if(c[c.size()-1]!=C[i]){
                    c.push_back(C[i]);
                }
            }
            unordered_map<int,int> m;
            for(int i=0;i<a.size();i++)
            {
                m[a[i]]++;
            }
            for(int i=0;i<b.size();i++)
            {
                m[b[i]]++;
            }
            for(int i=0;i<c.size();i++)
            {
                m[c[i]]++;
            }
            vector<int> co;
            for(auto e:m){
                if(e.second==3){
                    co.push_back(e.first);
                }
            }
            sort(co.begin(),co.end());
            return co;
            
            
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends