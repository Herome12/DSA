#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            // Calculate the area with the current pair of lines
            int width = right - left;
            int area = width * std::min(height[left], height[right]);
            maxArea = std::max(maxArea, area);

            // Move the pointer pointing to the shorter line inward
            if (height[left] < height[right]) {
                ++left;
            } else {
                --right;
            }
        }

        return maxArea;
    }
};
