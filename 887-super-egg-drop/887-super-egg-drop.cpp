class Solution {
public:
    int t[101][100001];
    int supereggdrop(int e, int f){
        if(f==0 ||f==1){
            return f;
        }
        if(e==1){
            return f;
        }
        if(t[e][f]!=-1){
            return t[e][f];
        }
        int mn=INT_MAX;
        int l=1,h=f;
        
        while(l<=h) {
              int mid=l+(h-l)/2;
              int a=supereggdrop(e-1,mid-1);
              int b=supereggdrop(e,f-mid);
              int x=max(a,b) + 1;
              mn=min(mn,x);
              if(a>b) h=mid-1;
              else l=mid+1;
          }
        return t[e][f]=mn;
    }
    int superEggDrop(int &e, int &f) {
        memset(t,-1,sizeof(t));
        return supereggdrop(e,f);
    }
};