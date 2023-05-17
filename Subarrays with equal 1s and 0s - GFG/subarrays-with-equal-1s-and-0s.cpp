//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        int count=0,ans=0;
        unordered_map<int,int>ump;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                count+=1;
            }
            else{
                count-=1;
            }
            if(count==0){
                ans++;
            }
            if(ump.find(count)!=ump.end()){
                ans+=ump[count];
            }
            ump[count]++;
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
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}

// } Driver Code Ends