class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        vector<string> ans;
        int i,j,count=0;
        for(i=0;i<items.size();i++){
            if(ruleKey=="type" && ruleValue==items[i][0]){
                    count++;
                }
            else if(ruleKey=="color" && ruleValue==items[i][1]){
                count++;
            }
            else if(ruleKey=="name" && ruleValue==items[i][2]){
                count++;
            }
                
            
        }
        return count;
    }
};