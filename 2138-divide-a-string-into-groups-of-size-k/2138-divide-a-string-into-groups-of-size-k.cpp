class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> v;
        string a="";
        for(int i=0;i<s.length();i++){
            
            
            if(a.length()<k){
                a+=s[i];
                if(a.length()==k){
                    v.push_back(a);
                }
                
            }
            else{
               // v.push_back(a);
                a=s[i];
                if(a.length()==k){
                v.push_back(a);
            }
            }
        }
        while(a.length()<k)
            {
                a+=fill;
            if(a.length()==k){
                v.push_back(a);
            }
            }
        
            
        
        return v;
    }
};