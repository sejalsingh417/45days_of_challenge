class Solution {
public:
    bool validPalindrome(string s) {
       
        int start = 0;
        int end = s.size() - 1;
        int count = 0;
        
        while(start < end){
            if(s[start] == s[end])
            {

                start++;
                end--;
            }
            else
            {
				
                count++;
               start++;     //skip 1 from starting
            }
			
            if(count > 1)
                break;
        }
        
        start = 0;
        end = s.size() - 1;
       int count1=0;
        
        while(start < end){
            if(s[start] == s[end])
            {
				
                start++;
                end--;  
            }
            else
            {

                count1++;
                end--;  //skip 1 from ending
            }
			
            if(count1 > 1)
                break;
            
        }
        
            if(count == 1 || count1 == 1)   //del atmost one char
            return true;
        if(count == 0 || count1 == 0)    //palindrome
            return true;
        
        return false;
               
        }

    
};