class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        for (int i=0;i<s.length();i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                str.push(s[i]);
                continue;
            }
            if (str.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']')) {
                return false;
            }
            if ((str.top() == '(' && s[i] != ')') || (str.top() == '{' && s[i] != '}') || (str.top() == '[' && s[i] != ']')) {
                return false;
            }
            if (s[i] == ')' && str.top() == '(') {
                str.pop();
            }
            if (s[i] == '}' && str.top() == '{') {
                str.pop();
            }
            if (s[i] == ']' && str.top() == '[') {
                str.pop();
            }
        }
       return str.empty();
    }
};