class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal){
            return true;
        }
        for(int i=0;i<s.size();i++){
            char x=s[s.size()-1];
            s.erase(s.begin()+s.size()-1);
            s.insert(s.begin(),x);
            if(s==goal){
                return true;
            }
            cout<<s<<endl;
        }
        return false;
    }
};