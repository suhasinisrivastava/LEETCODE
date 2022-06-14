class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int high = arr.size()-1;
        while(low<=high)
        {
		//Always Calculate mid like below to avoid integer overflow
            int mid = low+(high-low)/2;
			//If mid=0 then left = INT_MIN
            int left = mid-1>=0?arr[mid-1]:INT_MIN;
			//If mid=high, then right = INT_MIN
            int right = mid+1<=high?arr[mid+1]:INT_MIN;
			//If element at mid is greater than its left and right then mid is our answer.
            if(arr[mid]>right && arr[mid]>left)
                return mid;
			//If element at mid is smaller than its left element then search in the left part.
            else if(arr[mid]<left)
                high = mid-1;
			//If element at mid is smaller than its right part then search in the right part.
            else if(arr[mid]<right)
                low = mid+1;
        }
		//If  you did not find any peak index then return -1.
        return -1;
    }
};