class Solution {
public:
    bool isPalindrome(int x) {
        int ss = x;
        if (x < 0) return false;
        stack<int> s;

        while(x > 0) {
            int tmp = x % 10;
            s.push(tmp);
            x = x / 10;
        }
        while (ss > 0) {
            int cmp = ss % 10;
            if (s.top() != cmp) return false;
            ss = ss / 10;
            s.pop();
        }
        return true;
    }
};