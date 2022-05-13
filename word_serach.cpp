class Solution {
public:

        
bool dfs(vector<vector<char>>& board, const string& word, int i, int j) {
        if (word.empty()) return false;
        if (i < 0 || i >= board.size()) return false;
        if (j < 0 || j >= board[0].size()) return false;
        if (word[0] != board[i][j]) return false;
        if (word.size() == 1) return true;
        

        char temp = board[i][j];
        board[i][j] = '0';
        
        string nextWord = word.substr(1);
        bool found = false;
        if (dfs(board, nextWord, i+1, j)) found = true;
        if (dfs(board, nextWord, i-1, j)) found = true;
        if (dfs(board, nextWord, i, j+1)) found = true;
        if (dfs(board, nextWord, i, j-1)) found = true;
        

        board[i][j] = temp;
        return found;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        if (word.empty()) return false;
        

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                
                if (board[i][j] == word[0] && dfs(board, word, i, j)) return true;
            }
        }
        return false;
    }

    
};