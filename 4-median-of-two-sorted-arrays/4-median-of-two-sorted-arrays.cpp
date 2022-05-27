class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i,j;
        for(i=0;i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }
        for(i=0;i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(), ans.end());
        double a;
        
        if(ans.size()%2!=0){
            a=ans[(ans.size()/2)];
        }
        else{
            a=(ans[(ans.size()/2)]+ans[(ans.size()/2)-1]);
            a/=2;
        }
        return a;
    }
};