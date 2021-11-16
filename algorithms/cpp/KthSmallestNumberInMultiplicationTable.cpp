class Solution {
public:
    int count_lows(int m, int n, int x) {
        int ans = 0;
        
        for (int i = 1; i <= m; i++) {
            ans += min(x / i, n);
        }
        
        return ans;
    }
    
    int findKthNumber(int m, int n, int k) {
        int high = m * n;
        int low = 0;
        int ans;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int num_lows = count_lows (m, n, mid);
            
            if (num_lows < k) low = mid + 1;
            else {
                high = mid - 1;
                ans = mid;
            }
        }
        return ans;
    }
};