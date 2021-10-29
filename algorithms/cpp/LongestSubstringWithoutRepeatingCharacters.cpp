class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int N = s.size();
        int start = 0, end = 0, max_len = 0;
        unordered_map<char, int> window;
        while(end < N){
            if(window.find(s[end]) != window.end())
                start = max(start, window[s[end]] + 1);      //see explain      
            window[s[end]] = end;
            max_len = max(max_len, end - start + 1);
            end++;
        }
        return max_len;
    }
};