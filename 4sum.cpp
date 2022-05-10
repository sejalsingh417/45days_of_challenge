class Solution {
public:
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int tar=target-(nums[i]+nums[j]);
                
                int l=j+1;
                int r=n-1;
                while(l<r)
                {
                    if(nums[l]+nums[r]<tar)
                    {
                        l++;
                    }
                    else if(nums[l]+nums[r]>tar)
                    {
                        r--;
                    }
                    else
                    {
                        vector<int> temp(4,0);
                        temp[0]=nums[i];
                        temp[1]=nums[j];
                        temp[2]=nums[l];
                        temp[3]=nums[r];
                        ans.push_back(temp);
                        while(l<r&&nums[l]==temp[2]) l++; // remove duplicate
                        while(l<r&&nums[r]==temp[3]) r--;  // remove duplicate
                        
                    }
                }
                int a=nums[j];
                while(j<n-2&&a==nums[j]) j++;  // remove duplicate
                j--; // its done to overcome extra ++ of for loop
            }
                int a=nums[i];
                while(i<n-3&&a==nums[i]) i++;  // remove duplicate
            i--; // its done to overcome extra ++ of for loop
        }
        return ans;
    }
};

 

