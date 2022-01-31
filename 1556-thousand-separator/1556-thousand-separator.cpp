class Solution {
public:
    string thousandSeparator(int n) {
        string num= to_string(n);
        if(num.length()<4){
            return num;
        }
        else{
            for(int i=num.length()-1;i>=0;i--){
                if(i%3==0){
                    num.insert(num.length()-i,".");
                }
            }
        }
        num.pop_back();
        return num;
    }
};