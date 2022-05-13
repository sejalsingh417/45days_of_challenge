class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size()/2;
        unordered_map<int,int> m;
        int ans;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
       for(int i=0;i<nums.size();i++){
           if(m[nums[i]]>n){
               ans=nums[i];
               break;
           }
       }
        return ans;
    }
};