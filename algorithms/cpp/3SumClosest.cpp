class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closest = INT_MAX;
        int ans = INT_MAX;
        int N = nums.size();
        
        for (int i = 0; i < N - 2; i++) {
            int high = N - 1;
            int low = i + 1;
            int v1 = nums[i];
            
            while (low < high) {
                int v2 = nums[low];
                int v3 = nums[high];
                int remainder = target - v1 - v2 - v3;
                closest = min(abs(remainder), closest);
                if (closest == abs(remainder)) ans = (v1 + v2 + v3);
                if (remainder == 0) return {v1 + v2 + v3};
                else if (remainder < 0) {
                    high--;
                } else {
                    low++;
                }
            }
        }
        return ans;
    }
};