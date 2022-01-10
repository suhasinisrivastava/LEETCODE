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
            vector<int> v1;
            vector<int> v2;
            vector<int> v3;
            vector<int> v;
            vector<int> r;
            
            for(int i=0;i<n1;i++){
                v1.push_back(A[i]);
            }
            v1.erase( unique( v1.begin(), v1.end() ), v1.end() );
            for(int i=0;i<n2;i++){
                v2.push_back(B[i]);
            }
            v2.erase( unique( v2.begin(), v2.end() ), v2.end() );
            for(int i=0;i<n3;i++){
                v3.push_back(C[i]);
            }
            v3.erase( unique( v3.begin(), v3.end() ), v3.end() );
            for(int i=0;i<v1.size();i++){
                v.push_back(v1[i]);
            }
            for(int i=0;i<v2.size();i++){
                v.push_back(v2[i]);
            }
            for(int i=0;i<v3.size();i++){
                v.push_back(v3[i]);
            }
            sort(v.begin(),v.end());
            for(int i=0;i<v.size()-2;i++){
                if(v[i]==v[i+1]){
                    if(v[i+1]==v[i+2]){
                        r.push_back(v[i]);
                    }
                }
            }
            sort(r.begin(),r.end());
            r.erase( unique( r.begin(), r.end() ), r.end() );
            return r;
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