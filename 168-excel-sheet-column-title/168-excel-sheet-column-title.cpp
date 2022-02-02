class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n=columnNumber;
        
        string res="";
        while(n>0){
            int index=(n-1)%26;
        res+=char(index+'A');
        n=(n-1)/26;}
        reverse(res.begin(),res.end());
        return res;
    }
};