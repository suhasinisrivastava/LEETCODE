class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        long long n=num[0];
        vector<int> v;
        int x;
        if(num.size()==1){
            num[0]=num[0]+k;
            
            
        }
        else{
          num[num.size()-1]=num[num.size()-1]+k;
        for(int i=num.size()-1;i>=1;i--){
                x=num[i];
                if(num[i]>9){
                    num[i]=num[i]%10;
                    num[i-1]+=x/10;
                }
            
        }}
        
        int y=num[0];
        while(num[0]>9){
            num.insert(num.begin(),num[0]/10);
            num[1]=num[1]%10;
            
        }
        return num;
        
    }
};