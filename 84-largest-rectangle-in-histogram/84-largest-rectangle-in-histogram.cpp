class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int c=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]==0){
                c++;
            }
        }
        if(heights.size()==c){
            return 0;
        }
        stack<pair<int,int>> s1;
        vector<int>v1;
        for(int i=0;i<heights.size();i++){
            if(s1.empty()==true){
                v1.push_back(-1);
                s1.push({heights[i],i});
            }
            else if(s1.empty()!=true && s1.top().first<heights[i]){
                v1.push_back(s1.top().second);
                s1.push({heights[i],i});
            }
            else if(s1.empty()!=true && s1.top().first>=heights[i]){
                while(s1.empty()!=true){
                    s1.pop();
                    if(s1.empty()==true){
                        v1.push_back(-1);
                        s1.push({heights[i],i});
                        break;
                    }
                    else if(s1.empty()!=true && s1.top().first<heights[i]){
                        v1.push_back(s1.top().second);
                        s1.push({heights[i],i});
                        break;
                    }
                }
            }
        }
        stack<pair<int,int>> s2;
        vector<int>v2;
        for(int i=heights.size()-1;i>=0;i--){
            if(s2.empty()==true){
                v2.push_back(heights.size());
                s2.push({heights[i],i});
            }
            else if(s2.empty()!=true && s2.top().first<heights[i]){
                v2.push_back(s2.top().second);
                s2.push({heights[i],i});
            }
            else if(s2.empty()!=true && s2.top().first>=heights[i]){
                while(s2.empty()!=true){
                    s2.pop();
                    if(s2.empty()==true){
                        v2.push_back(heights.size());
                        s2.push({heights[i],i});
                        break;
                    }
                    else if(s2.empty()!=true && s2.top().first<heights[i]){
                        v2.push_back(s2.top().second);
                        s2.push({heights[i],i});
                        break;
                    }
                }
            }
        }
        reverse(v2.begin(),v2.end());
        
        for(int i=0;i<heights.size();i++){
            v1[i]=(v2[i]-v1[i]-1)*heights[i];
        }
        for(int i=0;i<heights.size();i++){
            cout<<v1[i]<<endl;
        }
        sort(v1.begin(),v1.end());
        
        
        return v1[v1.size()-1];
    }
};