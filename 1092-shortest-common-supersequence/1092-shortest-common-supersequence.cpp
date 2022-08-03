class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int m=str1.size();
        int n=str2.size();
        int t[m+1][n+1];
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0 || j==0){
                    t[i][j]=0;
                }
            }
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(str1[i-1]==str2[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }
                else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        
        cout<<t[m][n];
        int i=m,j=n;
        string s="";
        while(i>0&&j>0){
		if(str1[i-1]==str2[j-1]){
			s += str1[i - 1];
			i--, j--;
		}
		else
		{
			if(t[i][j-1]>t[i-1][j]){
				s += str2[j - 1];
				j--;
			}
			else{
				s += str1[i - 1];
				i--;
			}
		}
	}
        cout<<s;
        while(i>0){
            s.push_back(str1[i-1]);
            i--;
        }
        while(j>0){
            s.push_back(str2[j-1]);
            j--;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};

/*class Solution {
public:
    string shortestCommonSupersequence(string X, string Y) {
       int n=X.size(), m=Y.size();
	int t[n+1][m+1];
	for(int i=0;i<=n;i++)
		for(int j=0;j<=m;j++){
			if(i==0||j==0)
				t[i][j]=0;
		}
		
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			if(X[i-1]==Y[j-1])
				t[i][j]= 1+t[i-1][j-1];
			else
				t[i][j]= max(t[i-1][j],t[i][j-1]);
		}
		
	int i=n,j=m;
	string s;
	while(i>0&&j>0){
		if(X[i-1]==Y[j-1]){
			s += X[i - 1];
			i--, j--;
		}
		else
		{
			if(t[i][j-1]>t[i-1][j]){
				s += Y[j - 1];
				j--;
			}
			else{
				s += X[i - 1];
				i--;
			}
		}
	}
	
	while(i>0){
		s.push_back(X[i-1]);
		i--;
	}
	
	while(j>0){
		s.push_back(Y[j-1]);
		j--;
	}
	reverse(s.begin(), s.end());
	return s; 
    }
};*/