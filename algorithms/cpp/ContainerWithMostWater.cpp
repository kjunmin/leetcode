class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int max_area = 0;
        
        while (start < end) {
            int length = end - start;
            int area = min(height[start], height[end]) * length;
            max_area = max(area, max_area);
            if (height[start] < height[end]) start++;
            else end--;
        }
        return max_area;
    }
};