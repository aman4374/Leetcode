class Solution {
public:

int solve(vector<int> &arr){

    int n = arr.size();


    int prev2 = 0;
    int prev1 = arr[0];

    for(int i=1;i<n;i++){
        int incl = prev2+arr[i];
        int excl = prev1;

        int ans = max(incl,excl);
    
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}
    int rob(vector<int>& nums) {

        int n = nums.size();
        if(n == 1) return nums[0];
        
        vector<int> first,second;

        for(int i=0;i<n;i++) {
            if(i!=n-1) first.push_back(nums[i]);
            if(i!=0) second.push_back(nums[i]);
        }
        int ans = max(solve(first), solve(second));

        return ans;

        
    }
};