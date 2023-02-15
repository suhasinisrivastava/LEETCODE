//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long int atmost(string s, int k){
        vector<long long int>v(26,0);
        long long int c=0;
        long long int l=0;
        long long int r=0;
        long long int d=0;
       for(int i=0;i<s.size();i++){
           if(v[s[i]-'a']==0){
               d++;
           }
            v[s[i]-'a']++;
            while(d>k){
                v[s[l]-'a']--;
                if(v[s[l]-'a']==0){
                    d--;
                }
                l++;
            }
            if(d<=k){
                c+=(i-l+1);
            }
        }
        return c;
    }
    long long int substrCount (string s, int k) {
    	//code here.
    	return atmost(s,k)-atmost(s,k-1);
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends