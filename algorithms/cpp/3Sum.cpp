class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int N = nums.size();
        set<vector<int>> s;
        
        for (int i = 0; i < N-2; i++) {
            int low = i+1;
            int high = N - 1;
            int v1 = nums[i];
            while (low < high) {
                int v2 = nums[low];
                int v3 = nums[high];

                
                int remainder = 0 - v2 - v3 - v1;
                if (remainder == 0) {
                    s.insert({v1, v2, v3});
                    while (low < high && nums[low] == nums[low+1]) low++;
                    while (low < high && nums[high] == nums[high-1]) high--;
                    high--;
                    low++;
                } 
                else if (remainder < 0) {
                    high--;
                } 
                else {
                    low++;
                }
            }
        }
        
        vector<vector<int>> ans(s.begin(), s.end());
        
        return ans;
    }
};