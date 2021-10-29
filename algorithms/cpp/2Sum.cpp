class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        vector<int> ans;

        
        for (int i = 0; i < nums.size(); i++) {
            int remainder = target - nums[i];
            
            if (hash.find(remainder) != hash.end()) {
                ans.push_back(hash[remainder]);
                ans.push_back(i);
                
                return ans;
            } else {
                hash[nums[i]] = i;
            }
        }
        return ans;
    }
};