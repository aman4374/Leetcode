class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++) {
            if(count<2 || nums[i] != nums[count-2]) {
            nums[count] = nums[i];
            count++;
         } 
        }
        return count;
    }
};