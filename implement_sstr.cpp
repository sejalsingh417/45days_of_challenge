class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n=needle.length();

    if(haystack.length() < n) 
    {
        return -1; 
    } 
    
    for(int i=0;i<=haystack.length()-n;i++) 
    {
        if(string(haystack.begin()+i, haystack.begin()+i+n) == needle) 
        {
            return i; 
        }
    } 
    return -1; 

        
    }
};