class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.length();
        int i=0;
        while(i<n){
            if(s[i] == '{' || s[i] == '[' || s[i] == '('){
                st.push(s[i]);
                i++;
            }
            else{
                if (st.empty())
                    return false;
                char t = s[i];
                char c = st.top();
                st.pop();
                if(!((c == '{' && t == '}') || ( c == '(' && t == ')') || (c == '[' && t == ']'))){
                    return false;
                }else{
                    i++;
                }

            }
        }
    return st.empty();
    }
};
