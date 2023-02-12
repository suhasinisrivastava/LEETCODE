//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here     
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<R;i++){
            if(matrix[i][0]<mini){
                mini=matrix[i][0];
            }
            if(matrix[i][C-1]>maxi){
                maxi=matrix[i][C-1];
            }
        }
        int des=(R*C+1)/2;
        while(mini<maxi){
            int m=(mini+maxi)/2;
            int places=0;
            for(int i=0;i<R;i++){
             places+=upper_bound(matrix[i].begin(),matrix[i].end(),m)-matrix[i].begin();
            }
            if(places<des){
                mini=m+1;
            }
            else{
                maxi=m;
            }
        }
        return mini;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends