class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>ump1;
        for(int i=0;i<t.size();i++){
            ump1[t[i]]++;
        }
        unordered_map<char,int>ump2;
        int f=0,st=0,cnt=0,l=INT_MAX;
        string fi="";
       for(f=0;f<s.size();f++){
           if(ump1.find(s[f])!=ump1.end()){
               ump2[s[f]]++;
               if(ump2[s[f]]<=ump1[s[f]]){
               cnt++;
           }
               
           }
           
       
       
        if(cnt>=t.size()){
            while(ump1.find(s[st])==ump1.end()||ump2[s[st]]>ump1[s[st]]){
                ump2[s[st]]--;
                st++;
            }
        
        //cout<<l;
        cout<<st<<endl;
        if(l>f-st+1){
            l=f-st+1;
            fi=s.substr(st,l);
        }
        }
        
       }
        return fi;
    }
};