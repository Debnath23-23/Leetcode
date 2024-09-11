 class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int number = 0;
        int result = 0;
        int sign = 1;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            char c = s[i];

            // If it's a digit, update the number (handling multi-digit numbers).
            if (isdigit(c)) {
                number = number * 10 + (c - '0');
            } 
            // If it's a plus sign, update the result and reset number/sign.
            else if (c == '+') {
                result += sign * number;
                number = 0;
                sign = 1;
            } 
            // If it's a minus sign, update the result and reset number/sign.
            else if (c == '-') {
                result += sign * number;
                number = 0;
                sign = -1;
            } 
            // If it's an opening parenthesis, push the result and sign, reset them.
            else if (c == '(') {
                st.push(result);
                st.push(sign);
                result = 0;
                sign = 1;
            } 
            // If it's a closing parenthesis, calculate result within parentheses.
            else if (c == ')') {
                result += sign * number;
                number = 0;

                int prev_sign = st.top();
                st.pop();
                int prev_result = st.top();
                st.pop();

                result = prev_result + prev_sign * result;
            }
        }

        // Add any remaining number to the result.
        result += sign * number;

        return result;
    }
};
