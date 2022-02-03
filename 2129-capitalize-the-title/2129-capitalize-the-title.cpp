class Solution {
public:
    string capitalizeTitle(string title) {
        int count=0;
        int sum=0;
        int blank=0;
        transform(title.begin(), title.end(), title.begin(), ::tolower);
        int i=0;
        while(i<title.size()){
            if(i==title.size()-1){
                count++;
                if(count>2){
                char c=toupper(title[sum]);
                        title[sum]=c;}
            }
            if(title[i]!=' ' ){
            count++;
                
                i++;
            }
            else if(title[i]==' '){
                blank++;
                 sum++;
                if(count>2){
                   
                    if(blank==1){
                    char c=toupper(title[i-count]);
                    title[i-count]=c;}
                    else{
                        char c=toupper(title[sum-1]);
                        title[sum-1]=c;
                    }
                    
                    sum+=(count);
                    count=0;
                }
                else{
                    sum+=count;
                    count=0;
                }
                i++;
            }
        }
        return title;
    }
};