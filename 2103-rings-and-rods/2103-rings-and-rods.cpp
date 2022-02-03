class Solution {
public:
    int countPoints(string rings) {
        int count1=0,count2=0,count3=0,ans=0;
        
        for(int i=0;i<rings.length();i++){
            
            if(rings[i]=='0'){
                if(rings[i-1]=='B'){
                    count1++;
                }
                else if(rings[i-1]=='G'){
                    count2++;
                }
                else if(rings[i-1]=='R'){
                    count3++;
                }
            }
        }
        if(count1>=1 && count2>=1&& count3>=1){
            if(count1!=count2 || count2!=count3 || count1!=count3){
                count1=min(count1,min(count2,count3));
                count2=min(count1,min(count2,count3));
                count3=min(count1,min(count2,count3));
            }
        }
        if((count1+count2+count3)%3==0 && (count1+count2+count3)!=0 && count1==count2 &&count2==count3){
            ans++;
            
        }
        count1=0;
            count2=0;
            count3=0;
        for(int i=0;i<rings.length();i++){
            
            if(rings[i]=='1'){
                if(rings[i-1]=='B'){
                    count1++;
                }
                else if(rings[i-1]=='G'){
                    count2++;
                }
                else if(rings[i-1]=='R'){
                    count3++;
                }
            }
        }
        if(count1>=1 && count2>=1&& count3>=1){
            if(count1!=count2 || count2!=count3 || count1!=count3){
                count1=min(count1,min(count2,count3));
                count2=min(count1,min(count2,count3));
                count3=min(count1,min(count2,count3));
            }
        }
        if((count1+count2+count3)%3==0 && (count1+count2+count3)!=0 && count1==count2 &&count2==count3){
            ans++;
            
        }
        count1=0;
            count2=0;
            count3=0;
        for(int i=0;i<rings.length();i++){
            
            if(rings[i]=='2'){
                if(rings[i-1]=='B'){
                    count1++;
                }
                else if(rings[i-1]=='G'){
                    count2++;
                }
                else if(rings[i-1]=='R'){
                    count3++;
                }
            }
        }
        if(count1>=1 && count2>=1&& count3>=1){
            if(count1!=count2 || count2!=count3 || count1!=count3){
                count1=min(count1,min(count2,count3));
                count2=min(count1,min(count2,count3));
                count3=min(count1,min(count2,count3));
            }
        }
        if((count1+count2+count3)%3==0 && (count1+count2+count3)!=0 && count1==count2 &&count2==count3){
            ans++;
           
        }
        count1=0;
            count2=0;
            count3=0;
        
        for(int i=0;i<rings.length();i++){
            
            if(rings[i]=='3'){
                if(rings[i-1]=='B'){
                    count1++;
                }
                else if(rings[i-1]=='G'){
                    count2++;
                }
                else if(rings[i-1]=='R'){
                    count3++;
                }
            }
        }
        if(count1>=1 && count2>=1&& count3>=1){
            if(count1!=count2 || count2!=count3 || count1!=count3){
                count1=min(count1,min(count2,count3));
                count2=min(count1,min(count2,count3));
                count3=min(count1,min(count2,count3));
            }
        }
        if((count1+count2+count3)%3==0 && (count1+count2+count3)!=0 && count1==count2 &&count2==count3){
            ans++;
        
        }
        count1=0;
            count2=0;
            count3=0;
         
        for(int i=0;i<rings.length();i++){
            
            if(rings[i]=='4'){
                if(rings[i-1]=='B'){
                    count1++;
                }
                else if(rings[i-1]=='G'){
                    count2++;
                }
                else if(rings[i-1]=='R'){
                    count3++;
                }
            }
        }
        if(count1>=1 && count2>=1&& count3>=1){
            if(count1!=count2 || count2!=count3 || count1!=count3){
                count1=min(count1,min(count2,count3));
                count2=min(count1,min(count2,count3));
                count3=min(count1,min(count2,count3));
            }
        }
        if((count1+count2+count3)%3==0 && (count1+count2+count3)!=0 && count1==count2 &&count2==count3){
            ans++;
           
        }
        count1=0;
            count2=0;
            count3=0;
        for(int i=0;i<rings.length();i++){
            
            if(rings[i]=='5'){
                if(rings[i-1]=='B'){
                    count1++;
                }
                else if(rings[i-1]=='G'){
                    count2++;
                }
                else if(rings[i-1]=='R'){
                    count3++;
                }
            }
        }
        if(count1>=1 && count2>=1&& count3>=1){
            if(count1!=count2 || count2!=count3 || count1!=count3){
                count1=min(count1,min(count2,count3));
                count2=min(count1,min(count2,count3));
                count3=min(count1,min(count2,count3));
            }
        }
        if((count1+count2+count3)%3==0 && (count1+count2+count3)!=0 && count1==count2 &&count2==count3){
            ans++;
            
        }
        count1=0;
            count2=0;
            count3=0;
        
        for(int i=0;i<rings.length();i++){
            
            if(rings[i]=='6'){
                if(rings[i-1]=='B'){
                    count1++;
                }
                else if(rings[i-1]=='G'){
                    count2++;
                }
                else if(rings[i-1]=='R'){
                    count3++;
                }
            }
        }
        if(count1>=1 && count2>=1&& count3>=1){
            if(count1!=count2 || count2!=count3 || count1!=count3){
                count1=min(count1,min(count2,count3));
                count2=min(count1,min(count2,count3));
                count3=min(count1,min(count2,count3));
            }
        }
        if((count1+count2+count3)%3==0 && (count1+count2+count3)!=0 && count1==count2 &&count2==count3){
            ans++;
            
        }
        count1=0;
            count2=0;
            count3=0;
       
        for(int i=0;i<rings.length();i++){
            
            if(rings[i]=='7'){
                if(rings[i-1]=='B'){
                    count1++;
                }
                else if(rings[i-1]=='G'){
                    count2++;
                }
                else if(rings[i-1]=='R'){
                    count3++;
                }
            }
        }
        if(count1>=1 && count2>=1&& count3>=1){
            if(count1!=count2 || count2!=count3 || count1!=count3){
                count1=min(count1,min(count2,count3));
                count2=min(count1,min(count2,count3));
                count3=min(count1,min(count2,count3));
            }
        }
        if((count1+count2+count3)%3==0 && (count1+count2+count3)!=0 && count1==count2 &&count2==count3){
            ans++;
            
        }
        count1=0;
            count2=0;
            count3=0;
        cout<<ans<<endl;
        for(int i=0;i<rings.length();i++){
            
            if(rings[i]=='8'){
                if(rings[i-1]=='B'){
                    count1++;
                }
                else if(rings[i-1]=='G'){
                    count2++;
                }
                else if(rings[i-1]=='R'){
                    count3++;
                }
            }
        }
        if(count1>=1 && count2>=1&& count3>=1){
            if(count1!=count2 || count2!=count3 || count1!=count3){
                count1=min(count1,min(count2,count3));
                count2=min(count1,min(count2,count3));
                count3=min(count1,min(count2,count3));
            }
        }
        if((count1+count2+count3)%3==0 && (count1+count2+count3)!=0 && count1==count2 &&count2==count3){
            ans++;
            
        }
        
        count1=0;
            count2=0;
            count3=0;
        
        for(int i=0;i<rings.length();i++){
            
            if(rings[i]=='9'){
                if(rings[i-1]=='B'){
                    count1++;
                }
                else if(rings[i-1]=='G'){
                    count2++;
                }
                else if(rings[i-1]=='R'){
                    count3++;
                }
            }
        }
        
        if(count1>=1 && count2>=1&& count3>=1){
            if(count1!=count2 || count2!=count3 || count1!=count3){
                count1=min(count1,min(count2,count3));
                count2=min(count1,min(count2,count3));
                count3=min(count1,min(count2,count3));
            }
        }
        if((count1+count2+count3)%3==0 && (count1+count2+count3)!=0 && count1==count2 &&count2==count3){
            ans++;
            
        }
        count1=0;
            count2=0;
            count3=0;
        
        return ans;
    }
};