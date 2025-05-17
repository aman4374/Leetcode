class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();
    int count = 0; // Count of modifications

    for (int i = 1; i < n; ++i) {
        if (nums[i] < nums[i - 1]) {
            if (++count > 1) return false;

            // Try to fix the previous number or the current one
            if (i - 2 < 0 || nums[i - 2] <= nums[i]) {
                nums[i - 1] = nums[i]; // Modify nums[i-1]
            } else {
                nums[i] = nums[i - 1]; // Modify nums[i]
            }
        }
    }
    return true;
    }
};