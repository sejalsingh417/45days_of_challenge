class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int m=matrix.size();// row
        int n= matrix[0].size();//column

        vector<vector<int>> ans(n,vector<int> (m,0));//matrix creation
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[j][i]=matrix[i][j];//copying row into column
                
            }
        }
        return ans;
        
        
    }
};