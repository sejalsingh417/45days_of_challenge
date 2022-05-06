class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
         int l=0, r=cardPoints.size()-k, t=0,s=0;
        
          t=accumulate(cardPoints.begin(),cardPoints.end(), t);
        for(int i=l;i<r;i++){
            s+=cardPoints[i];
        }
        int ans= t-s;
        while(r<cardPoints.size()){
            s-=cardPoints[l++];
            s+=cardPoints[r++];
            ans=max(ans,t-s);
            
        }
        return ans;
    }
};