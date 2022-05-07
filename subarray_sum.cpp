class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        
        int sum = 0 ;
        int count = 0 ;
        for(int i = 0 ; i < nums.size() ; i++) {
            
            sum = sum + nums[i];
            
            if(sum == k) {
                
                count ++;
            }
        
            int left = sum - k;

            if(mp[left] > 0) {

                count += mp[left];
            }
            
            mp[sum] ++;
        }
        
        return count;

    }
};