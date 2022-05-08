class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++){

            if(maxi<i)return false;
            else{

                maxi=max(maxi,nums[i]+i);
            }
        }
        return true;
    }
};
