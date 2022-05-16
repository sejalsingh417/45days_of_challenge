class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        
           int n = mat.size();
            int m = mat[0].size();

        int len = n * m;

            vector<int>ans;
            
        
            int i = 0,j = m-1,k = n-1,l = 0;
            while(ans.size() < len){
                for(int p = l; p <= j; p++){
                    ans.push_back(mat[i][p]);
                }
                for(int p = i+1; p <= k; p++){
                    ans.push_back(mat[p][j]);
                }
                for(int p = j-1; p >= l; p--){
                    ans.push_back(mat[k][p]);
                }
                for(int p = k-1; p > i; p--){
                    ans.push_back(mat[p][l]);
                }
                i++;
                j--;
                k--;
                l++;

            }
            vector<int>res;
            for(int i = 0; i < len; i++){
                res.push_back(ans[i]);
            }
            return res;
    

        
    }
};