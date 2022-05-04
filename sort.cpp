class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0,count1=0,count2=0;
        for(int i:nums)
        {
            if(i==0)
                count0++;
            else if(i==1)
                count1++;
            else
                count2++;
        }
        int t=0;
        for(int i=0;i<count0;i++)
            nums[i]=0;
        t = count0;
        for(int i=t;i<t+count1;i++)
            nums[i]=1;
        t+=count1;
        for(int i=t;i<t+count2;i++)
            nums[i]=2;

        

        
    }
};