class Solution {
   public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
                if (st.empty()) return false;
                char top = st.top();
                if ((s[i] == ')' && top == '(') || (s[i] == ']' && top == '[') ||
                    (s[i] == '}' && top == '{'))
                    st.pop();
                else
                    return false;
            } else {
                st.push(s[i]);
            }
        }

        return st.empty();
    }
};
