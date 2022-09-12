class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int maxi=0;
        
        for(int i=0;i<points.size();i++){
            unordered_map<double,int>ump;
            int y=0;
            for(int j=i+1;j<points.size();j++){
                if((points[j][0]-points[i][0])!=0){
                double d=(double)(points[j][1]-points[i][1])/(points[j][0]-points[i][0]);
                    //cout<<i<<j<<endl;
                    
                ump[d]++;
                    
                }
                else{
                    y++;
                }
            }      
        for(auto it:ump){
            if(it.second>maxi){
            maxi=it.second;
            //cout<<it.first;
            }
            
            
        }
            maxi=max(maxi,y);
            
        }
        
        
        //x2-x-maxi*2
        return maxi+1;
    }
};