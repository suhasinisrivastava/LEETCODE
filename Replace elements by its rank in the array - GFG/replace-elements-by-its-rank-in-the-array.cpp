//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    vector<int> replaceWithRank(vector<int> &arr, int N){

        unordered_map<int,int>ump1;
        unordered_map<int,int>ump2;
        vector<int>v=arr;
        sort(v.begin(),v.end());
        for(int i=0;i<arr.size();i++){
            if(i>0 && v[i]==v[i-1]){
                ump1[v[i]]=ump1[v[i-1]];
            }
            else{
                if(i==0){
                    ump1[v[i]]=1;
                }
                else{
                    ump1[v[i]]=ump1[v[i-1]]+1;
                }
                
            }
            
        }
        //cout<<ump1[2];
        for(int i=0;i<arr.size();i++){
            arr[i]=ump1[arr[i]];
        }
        return arr;
    }

};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        vector<int> ans = obj.replaceWithRank(vec,n);
        for(int i = 0;i<n;i++) cout << ans[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends