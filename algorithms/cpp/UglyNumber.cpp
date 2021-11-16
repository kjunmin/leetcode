class Solution {
public:
    bool isDivisible(int n, int divisor) {
        return n % divisor == 0;
    }
    bool isUgly(int n) {
        if (n <= 0) return false;
        while (n > 1) {
            if (isDivisible(n, 2)) n = n / 2;
            else if (isDivisible(n, 3)) n = n / 3;
            else if (isDivisible(n, 5)) n = n / 5;
            else return false;
        }
        return true;
    }
};