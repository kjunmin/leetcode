class Solution {
public:
    int arrangeCoins(int n) {
        int nextI = 1;
        int ans = 0;
        
        while (n >= nextI) {
            n -= nextI;
            ans++;
            nextI++;
        }
        return ans;
    }
};