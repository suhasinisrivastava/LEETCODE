class Solution {
public:
       int count_at_most(string s, int k){
     int n = s.size();
        
        unordered_map<char, int> mp;
        
        int left = 0;
        
        int count = 0;
        
        for(int right = 0; right < n; right++)
        {
            mp[s[right]]++;
            
            while(mp.size() > k)
            {
                mp[s[left]]--;
                
                if(mp[s[left]] == 0)
                {
                    mp.erase(s[left]);
                }
                
                left++;
            }
            
            int curr_count = right - left + 1;
            
            count += curr_count;
        }
        
        return count;
    }
    
    int numberOfSubstrings(string s) {
        unordered_map<char,int> ump;
        for(int i=0;i<s.size();i++){
            ump[s[i]]++;
        }
        int k=ump.size();
        if(k<3){
            return 0;
        }
        int count_at_most_k = count_at_most(s, k);
        
        int count_at_most_k_1 = count_at_most(s, k - 1);
        
        int count_exactly_k = count_at_most_k - count_at_most_k_1;
        
        return count_exactly_k;
    }
};