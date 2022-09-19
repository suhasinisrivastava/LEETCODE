class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int st=0;
        int e=0;
        int sum=0,cnt=INT_MIN;
        //cout<<s[0]-t[1];
        while(e<s.size()){
            sum+=abs(s[e]-t[e]);
            if(sum<=maxCost){
                cnt=max(cnt,e-st+1);
                e++;
            }
            
            
            else if(sum>maxCost){
            while(sum>maxCost){
                sum-=(abs(s[st]-t[st]));
                st++;
            }
                e++;
            }
        }
        if(cnt==INT_MIN){
            return 0;
        }
        return cnt;
    }
};