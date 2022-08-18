class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> ump;
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            ump[nums1[i]]++;
        }
        int m=ump.size();
        for(int i=0;i<nums2.size();i++){
            if(ump[nums2[i]]>0 ){
                v.push_back(nums2[i]);
            }
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        return v;
    }
};