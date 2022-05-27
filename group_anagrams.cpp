class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, int> mp;
        vector<vector<string>>ans;
        int ind=1;
        for(int i=0;i<strs.size();i++)
        {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            if(mp[temp]!=0)
            {
                int ind = mp[temp];
                ans[ind-1].push_back(strs[i]);
            }
            else
            {
                ans.push_back({strs[i]});
                mp[temp]=ind++;
            }
        }
        return ans;

        
    }
};