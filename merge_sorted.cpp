class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int l=0;
        int h=0;
        
        while(l<m && h<n)
        {
            if(nums1[l]>=nums2[h])
            {
                ans.push_back(nums2[h]);
                    h++;
            }
            else if(nums1[l]<nums2[h]){
                ans.push_back(nums1[l]);
                    l++;
            }
        }
        for(int i=l;i<m;i++)
            ans.push_back(nums1[i]);
        for(int i=h;i<n;i++)
            ans.push_back(nums2[i]);
            
        nums1=ans;


    }
};