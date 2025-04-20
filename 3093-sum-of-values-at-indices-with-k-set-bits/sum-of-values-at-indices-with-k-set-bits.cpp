class Solution {
public:
    int count(int n){
        int count = 0;
        while(n>0) {
            count = count + (n & 1);
            n >>= 1;
        }
        return count;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int s = nums.size();
        int total = 0;

        for(int i=0;i<s;i++){
            if(count(i) == k) 
            total = total + nums[i];
        }
        return total;
    }
};