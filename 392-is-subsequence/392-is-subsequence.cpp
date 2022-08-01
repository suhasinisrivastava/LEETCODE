class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.size();
        int n=t.size();
        int ti[m+1][n+1];
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0 || j==0){
                    ti[i][j]=0;
                }
            }
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(s[i-1]==t[j-1]){
                    ti[i][j]=1+ti[i-1][j-1];
                }
                else{
                    ti[i][j]=max(ti[i-1][j],ti[i][j-1]);
                }
            }
        }
        cout<<ti[m][n];
        if(ti[m][n]==s.size()){
            return true;
        }
        return false;
    }
};