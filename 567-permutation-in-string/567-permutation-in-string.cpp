class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> m;
        unordered_map<char,int> n;
        int count=0,el=0,i=0;
        
        if(s1.length()>s2.length()){
            return false;
        }
        for(int i=0;i<s1.length();i++){
            n[s1[i]]++;
        }
        while(i<=s2.size()-s1.size()){
            for(int j=i;j<s1.length()+i;j++){
                m[s2[j]]++;
            }
            if(m==n){
                return true;
            }
            i++;
            m.clear();
        }
        return false;
        
        
    }
};