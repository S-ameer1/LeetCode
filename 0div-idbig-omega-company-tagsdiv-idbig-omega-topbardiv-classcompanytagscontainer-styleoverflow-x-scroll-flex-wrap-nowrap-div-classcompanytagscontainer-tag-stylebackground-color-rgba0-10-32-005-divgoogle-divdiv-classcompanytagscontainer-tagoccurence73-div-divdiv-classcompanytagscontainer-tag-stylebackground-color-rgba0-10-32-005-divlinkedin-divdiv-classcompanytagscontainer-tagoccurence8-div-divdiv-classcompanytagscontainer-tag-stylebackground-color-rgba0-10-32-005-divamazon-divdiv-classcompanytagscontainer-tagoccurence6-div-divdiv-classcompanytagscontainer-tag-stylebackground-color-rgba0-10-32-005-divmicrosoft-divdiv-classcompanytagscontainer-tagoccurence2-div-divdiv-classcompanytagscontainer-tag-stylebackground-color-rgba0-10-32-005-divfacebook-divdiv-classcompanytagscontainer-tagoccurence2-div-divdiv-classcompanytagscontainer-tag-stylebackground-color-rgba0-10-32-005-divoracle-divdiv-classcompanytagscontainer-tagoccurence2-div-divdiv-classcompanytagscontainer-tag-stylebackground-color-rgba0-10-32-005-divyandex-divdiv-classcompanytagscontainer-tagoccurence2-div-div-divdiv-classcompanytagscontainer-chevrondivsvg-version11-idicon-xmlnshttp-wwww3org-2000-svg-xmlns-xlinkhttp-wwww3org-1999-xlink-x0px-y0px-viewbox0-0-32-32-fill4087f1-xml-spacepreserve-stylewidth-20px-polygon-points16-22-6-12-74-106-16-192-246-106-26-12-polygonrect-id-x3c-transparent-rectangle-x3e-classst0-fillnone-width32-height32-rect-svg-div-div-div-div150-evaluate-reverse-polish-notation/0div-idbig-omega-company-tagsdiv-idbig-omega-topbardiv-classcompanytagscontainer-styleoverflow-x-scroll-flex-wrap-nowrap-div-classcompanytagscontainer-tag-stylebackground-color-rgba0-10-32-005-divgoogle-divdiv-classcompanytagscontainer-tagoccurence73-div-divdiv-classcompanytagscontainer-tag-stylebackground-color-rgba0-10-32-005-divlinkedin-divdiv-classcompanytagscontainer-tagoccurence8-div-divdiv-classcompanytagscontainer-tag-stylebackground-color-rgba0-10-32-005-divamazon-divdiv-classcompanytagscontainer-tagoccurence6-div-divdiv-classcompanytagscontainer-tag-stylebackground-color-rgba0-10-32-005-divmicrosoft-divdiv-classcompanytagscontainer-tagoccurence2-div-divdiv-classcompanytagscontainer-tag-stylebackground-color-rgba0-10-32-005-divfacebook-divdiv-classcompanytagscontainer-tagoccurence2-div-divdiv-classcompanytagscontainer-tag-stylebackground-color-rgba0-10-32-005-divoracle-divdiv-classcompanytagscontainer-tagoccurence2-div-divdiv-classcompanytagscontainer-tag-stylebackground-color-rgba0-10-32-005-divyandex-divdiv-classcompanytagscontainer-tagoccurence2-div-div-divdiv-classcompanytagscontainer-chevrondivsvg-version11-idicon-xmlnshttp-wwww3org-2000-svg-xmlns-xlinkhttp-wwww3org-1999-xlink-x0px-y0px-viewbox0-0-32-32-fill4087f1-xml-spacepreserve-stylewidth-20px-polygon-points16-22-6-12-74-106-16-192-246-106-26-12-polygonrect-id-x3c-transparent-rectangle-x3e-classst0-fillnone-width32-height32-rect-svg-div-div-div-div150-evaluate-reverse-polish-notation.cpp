class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        int n = tokens.size();

        for (int i = 0; i < n; i++) {
            string c = tokens[i];
            if (c == "+" || c == "-" || c == "*" || c == "/") {
                int a1 = stoi(s.top());
                s.pop();
                int b1 = stoi(s.top());
                s.pop();

                if (c == "+") {
                    s.push(to_string(b1 + a1));
                } else if (c == "-") {
                    s.push(to_string(b1 - a1));
                } else if (c == "*") {
                    s.push(to_string(b1 * a1));
                } else if (c == "/") {
                    s.push(to_string(b1 / a1));
                }
            } else {
                s.push(tokens[i]);
            }
        }

        return stoi(s.top());
    }
};
