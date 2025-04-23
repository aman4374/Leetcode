class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
         double maxSum = 0, windowSum = 0;

        // Sum of first window
        for (int i = 0; i < k; ++i) {
            windowSum += nums[i];
        }

        maxSum = windowSum;

        // Slide the window
        for (int i = k; i < nums.size(); ++i) {
            windowSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, windowSum);
        }

        return maxSum / k;
    }
};