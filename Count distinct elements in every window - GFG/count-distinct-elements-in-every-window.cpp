//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        unordered_map<int,int>ump;
        int j=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            ump[A[i]]++;
            if(i-j+1==k){
                v.push_back(ump.size());
                ump[A[j]]--;
                if(!ump[A[j]]){
                    ump.erase(A[j]);
                }
                j++;
            }
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends