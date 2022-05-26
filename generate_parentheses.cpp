class Solution {
public:
vector<string> sol;

void generate(string& s, int open, int close) 
{
    // base case 
    
    if((open == 0) && (close == 0)) 
    {
        sol.push_back(s); 
        return; 
    } 
    
    if(open > 0) 
    {
        s.push_back('('); 
        generate(s, open-1, close); 
        s.pop_back(); 
    } 
    
    if((open < close) && (close > 0)) 
    {
        s.push_back(')'); 
        generate(s, open, close-1); 
        s.pop_back(); 
    } 
    
}
vector<string> generateParenthesis(int n) { 
    string s=""; 
    generate(s, n, n); 
    return sol; 
}
};

