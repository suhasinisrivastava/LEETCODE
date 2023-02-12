//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here 
        long long int ans=0;
        if(x==0||x==1){
            return x;
        }
        int s=1;
        int e=x/2;
        while(s<=e){
            long long int m=(s+e)/2;
            long long int sq=m*m;
            if(sq==x){
                return m;
            }
            else if(sq<x){
                ans=m;
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends