class Solution {
public:
    // int solve(vector<int> &nums, int n,vector<int> &dp) {
    // if(n < 0) return 0;
    // if(n == 0) return nums[0];

    // if(dp[n]!=-1) return dp[n];

    // int incl = solve(nums, n - 2,dp) + nums[n];
    // int excl = solve(nums, n - 1,dp);

    // dp[n] = max(incl, excl);
    // return dp[n];
//}
    int rob(vector<int>& arr) {
    
        int n = arr.size();

        if(n<0) return 0;
        if (n == 1) return arr[0]; // Handle single house case

        vector<int> dp(n, 0);
        
        dp[0] = arr[0];
        dp[1] = max(arr[0], arr[1]);

        for (int i = 2; i < n; i++) {
            int incl = dp[i-2] + arr[i];
            int excl = dp[i-1];

            dp[i] = max(incl, excl);
        }
        return dp[n-1];
    }
};