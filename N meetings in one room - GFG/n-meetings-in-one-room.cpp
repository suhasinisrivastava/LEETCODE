//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    bool comp(pair<int,int>&a,pair<int,int>&b){
        return a>b;
    }
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back(make_pair(end[i],start[i]));
        }
        sort(v.begin(),v.end());
        int last=v[0].first;
        int task=1;
        for(int i=1;i<v.size();i++){
            if(v[i].second>last){
                task++;
                last=v[i].first;
            }
        }
        return task;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends