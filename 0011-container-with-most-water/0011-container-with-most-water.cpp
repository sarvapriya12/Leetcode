class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int bestBox = 0;

        while (left < right) {

            int width = right - left;
            int currBox = width * min(height[left], height[right]);

            bestBox = max(bestBox, currBox);

            if (height[left] < height[right]) {
                left++;
            }
            else if (height[left] > height[right]) {
                right--;
            }
            else {
                left++;      
            }
        }

        return bestBox;
    }
};