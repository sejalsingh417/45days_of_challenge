class Solution {
public:
    string reverseWords(string s) {
        
        stack<string> st;
        string s1 = "";

    for(int i = 0; i < s.size(); i++) {
        if(s[i] != ' '){
            s1+=s[i];
        }
        else if(s[i] == ' '){
            if(!s1.empty()){
                st.push(s1);
                s1 = "";
            }else{
                continue;
            }
        }
    }
    while(!st.empty()){
        string a = st.top();
        st.pop();
        if(s1.size() == 0)
           s1 = s1 + a;
        else
            s1 += " " + a;
    }
    return s1;

        
        
        
    }
};