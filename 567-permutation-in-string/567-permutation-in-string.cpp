class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> f_s1(26,0); vector<int> f_s2(26,0); //frequency tables
        int k=s1.size(), n=s2.size(), i;
        if(k>n)return 0;
        for(i=0;i<k;i++){   
            f_s1[s1[i]-'a']++;  f_s2[s2[i]-'a']++; //initialise the tables
        }
        if(f_s1 == f_s2)return 1;
        for(i;i<n;i++){
            f_s2[s2[i-k]-'a']--; f_s2[s2[i]-'a']++; //reset window with new element
            if(f_s1 == f_s2)return 1;
        }
        return 0;
    }
};