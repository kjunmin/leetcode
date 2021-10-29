class Solution {
public:
    void constructCombinations(vector<string>& ans, vector<string> letters, string combination, string digits, int index) {
        if (index == digits.length()) {
            ans.push_back(combination);
            return;
        };
        char digit = digits[index];
        string list = letters[digit - '0'];
        for (char c : list) {
            constructCombinations(ans, letters, combination + c, digits, index + 1);
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.length() == 0) return {};
        vector<string> letters = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        
        constructCombinations(ans, letters, {}, digits, 0);
        return ans;
    }
};