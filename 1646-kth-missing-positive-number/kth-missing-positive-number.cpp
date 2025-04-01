class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int curr = 1;
        int index = 0;
        int miss_count = 0;

        while(miss_count < k) {
            if(index < arr.size() && arr[index] == curr) {
                index++;
            }
            else {
                miss_count++ ;
                    if(miss_count == k) return curr;
            }
            curr++ ;
        }
        return curr;
    }
};