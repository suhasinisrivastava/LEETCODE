// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        vector<long long int> v;
        long long int a=1,p=1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                p=p;
            }
            else{
                p*=nums[i];
            }
            a*=nums[i];
        }
        for(int i=0;i<n;i++){
            if(nums[i]==0 && m[0]==1){
                v.push_back(p);
            }
            else if(nums[i]==0 && m[0]>1){
                v.push_back(0);
            }
            else{
            v.push_back(a/nums[i]);}
        }
        return v;
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends