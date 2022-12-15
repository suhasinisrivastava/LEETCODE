//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    // Your code goes here
	    char a=s[0];
	    char b=s[s.size()-1];
	    int i=0;
	    int n=s.size()-1;
	    while(i<=n){
	        a=s[i];
	        b=s[n];
	        if(a!=b){
	            return 0;
	        }
	        //cout<<"v";
	        i++;
	        n--;
	    }
	    return 1;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends