class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char res=' ';
        int start=0,end=letters.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(mid==letters.size()-1 && letters[mid]<=target){
                return letters[0];
            }
            if(letters[mid]<=target){
                start=mid+1;
            }
            else if(letters[mid]>target){
                res=letters[mid];
                end=mid-1;
            }
        }
        return res;
        
    }
};