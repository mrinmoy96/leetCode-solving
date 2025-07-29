class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        long result = 0;  // use long to handle overflow during calculation
        int sign = 1;

        // 1. Skip leading whitespaces
        while (i < n && s[i] == ' ') i++;

        // 2. Check sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // 3. Read digits
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            result = result * 10 + digit;

            // 4. Clamp to 32-bit range
            if (sign == 1 && result > INT_MAX) return INT_MAX;
            if (sign == -1 && -result < INT_MIN) return INT_MIN;

            i++;
        }

        return (int)(sign * result);
    }
};