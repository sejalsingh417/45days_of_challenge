class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int count=0;
        int min=INT_MAX;
        int m=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
        
        }
        m=prices[i]-min;
        if(count<m){
            count=m;
    }
        }
        return count;
        
    }
};