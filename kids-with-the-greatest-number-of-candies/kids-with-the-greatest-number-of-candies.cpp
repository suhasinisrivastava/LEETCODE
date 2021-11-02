class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int i,j,max=candies[0];
        for(i=0;i<candies.size();i++){
            if(candies[i]>max){
                max=candies[i];
            }
        }
        for(j=0;j<candies.size();j++){
            if(candies[j]+extraCandies>=max){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};