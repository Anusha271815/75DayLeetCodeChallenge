class Solution {
public:
    int maxArea(vector<int>& height) {
        int water;
        int maxwater = INT_MIN;
        int st = 0, end = height.size() - 1;
        while (st < end) {
            int w = end - st;
            int h = min(height[st], height[end]);
            water = w * h;
            maxwater =max(maxwater, water);
            if (h == height[st])
                st++;
            else {
                end--;
            }
        }
        return maxwater;
    }
};