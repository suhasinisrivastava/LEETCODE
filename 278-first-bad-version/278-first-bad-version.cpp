// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long start=1,ans;
        long long end=n;
        while(start<=end){
            long long mid=(start+end)/2;
            if(isBadVersion((start+end)/2)==false){
                start=mid+1;
            }
            else if(isBadVersion((start+end)/2)==true){
                ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};