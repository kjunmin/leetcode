class Solution {
public:
    bool isValid(string s) {
        // ( = 0
        // { = 1
        // [ = 2
        
        stack<char> st;
        
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                if (c == '(') st.push(')');
                if (c == '{') st.push('}');
                if (c == '[') st.push(']');
            } else {
                if (st.empty()) return false;
                char check = st.top();
                if (c != check) return false;
                st.pop();
            }
            
        }
        if (st.empty()) return true;
        return false;
    }
};