class Solution {
public:
    bool isValid(string s) {
        if (s.size() == 1) {
            return false;
        }
        stack<char> st;
        for (auto ch : s) {

            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }else if (!st.empty()) {
                if ((ch == ')' && st.top() == '(') ||
                    (ch == '}' && st.top() == '{') ||
                    (ch == ']' && st.top() == '[')) {
                    st.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }

        }
        if(st.empty()){

        return true;
        }
        return false;
    }
};
