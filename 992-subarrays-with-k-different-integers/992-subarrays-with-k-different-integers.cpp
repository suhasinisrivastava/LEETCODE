class Solution {
public:
    int count_at_most(vector<int>nums, int k){
     int n = nums.size();
        
        unordered_map<int, int> mp;
        
        int left = 0;
        
        int count = 0;
        
        for(int right = 0; right < n; right++)
        {
            mp[nums[right]]++;
            
            while(mp.size() > k)
            {
                mp[nums[left]]--;
                
                if(mp[nums[left]] == 0)
                {
                    mp.erase(nums[left]);
                }
                
                left++;
            }
            
            int curr_count = right - left + 1;
            
            count += curr_count;
        }
        
        return count;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        int count_at_most_k = count_at_most(nums, k);
        
        int count_at_most_k_1 = count_at_most(nums, k - 1);
        
        int count_exactly_k = count_at_most_k - count_at_most_k_1;
        
        return count_exactly_k;
    }
};