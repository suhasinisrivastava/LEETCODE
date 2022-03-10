class Solution {
public:
    bool isValid(string s) {
        int n= s.length();
        stack<char> x;
        for(int i=0;i<s.length();i++){
            if(x.empty()){
                x.push(s[i]);
            }
            else{
                if(x.top()=='('&& s[i]==')'){
                    x.pop();
                }
                else if(x.top()=='{' && s[i]=='}'){
                    x.pop();
                }
                else if(x.top()=='[' && s[i]==']'){
                    x.pop();
                }
                else{
                    x.push(s[i]);                }
            }
        }
        if(x.empty()==true){
            return true;
        }
    return false;
    }
};