class Solution {
public:
    int maximumProduct(vector<int>& nums) {

    sort(nums.begin(), nums.end());

    int n = nums.size();

    // Option 1: Product of the three largest numbers
    int prod1 = nums[n - 1] * nums[n - 2] * nums[n - 3];

    // Option 2: Product of two smallest (possibly negative) and the largest
    int prod2 = nums[0] * nums[1] * nums[n - 1];

    return max(prod1, prod2);
    }
};