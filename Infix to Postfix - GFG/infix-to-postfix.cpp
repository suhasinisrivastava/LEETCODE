//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int prec(char c){
      if(c=='^'){
          return 3;
      }
      else if(c=='/' || c=='*'){
          return 2;
      }
      else if(c=='+' || c=='-'){
          return 1;
      }
      else{
          return -1;
      }
  }
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string st) {
        // Your code here
        string result;
        stack<char>s;
        for(int i=0;i<st.size();i++){
            char c=st[i];
            if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='1' && c<='9') ){
                result+=c;
            }
            else if(c=='('){
                s.push(c);
            }
            else if (c==')'){
                while(s.top()!='('){
                    result+=s.top();
                    s.pop();
                }
                s.pop();
            }
            else{
                while(!s.empty() && prec(c)<=prec(s.top())){
                    result+=s.top();
                    s.pop();
                }
                s.push(c);
            }
        }
        while(!s.empty()){
            result+=s.top();
            s.pop();
        }
        return result;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends