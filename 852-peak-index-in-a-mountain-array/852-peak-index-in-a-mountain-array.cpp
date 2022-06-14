class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0;
        int high=arr.size()-1;
        if(arr.size()==1){
            return 0;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid>0 && mid<arr.size()-1){
                if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                    return mid;
                }
                else if(arr[mid-1]>arr[mid]){
                    high=mid-1;
                }
                else if(arr[mid+1]>arr[mid]){
                    low=mid+1;
                }
            }
            else if(mid==0){
                if(arr[mid]>arr[1]){
                    return 0 ;
                }
                else{
                    return 1;
                }
            }
            else if(mid==arr.size()-1){
                if(arr[mid]>arr[arr.size()-2]){
                    return arr.size()-1;
                }
                else{
                    return arr.size()-2;
                }
            }
        }
        return 0;
    }
};