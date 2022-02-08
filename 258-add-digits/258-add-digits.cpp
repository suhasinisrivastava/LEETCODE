class Solution {
public:
    int add(int num){
        vector<int> v;
        int sum=0;
            while(num>0){
            v.push_back(num%10);
            num/=10;
        }
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
            v.clear();
        num=sum;
        if(num>=10){
            return add(num);
        }
        else{
            return num;
        }
        
        }
    int addDigits(int num) {
        
        if(num<10){
            return num;
        }
        if(num>=10){
            return add(num);
        }
        return num;
    }
};