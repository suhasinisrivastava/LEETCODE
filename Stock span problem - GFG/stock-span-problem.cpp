//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int nums2[], int n)
    {
       // Your code here
       vector<int>v;
        stack<int>s;
        for(int i=0;i<n;i++){
            if(s.empty()){
                v.push_back(-1);
                s.push(i);
            }
            else{
                if(nums2[s.top()]>nums2[i]){
                    v.push_back(s.top());
                    s.push(i);
                }
                else{
                    while(!s.empty() && nums2[s.top()]<=nums2[i]){
                        s.pop();
                        if(s.empty()){
                v.push_back(-1);
                s.push(i);
                break;
            }
                    else if(nums2[s.top()]>nums2[i]){
                    v.push_back(s.top());
                    s.push(i);
                    break;
                }

                    }
                }
            }
        }
        
        
        for(int i=0;i<v.size();i++){
            if(v[i]==-1){
                v[i]=i+1;
            }
            else{
                v[i]=i-v[i];
            }
        }
        return v;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends