class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
    if (n < 3) return false;

    bool increasing = false;
    bool decreasing = false;

    for (int i = 1; i < n; ++i) {
        if (arr[i] == arr[i - 1]) {
            return false; // plateau is not allowed
        } else if (arr[i] > arr[i - 1]) {
            if (decreasing) return false; // once started decreasing, cannot go up again
            increasing = true;
        } else {
            if (!increasing) return false; // cannot go down before going up
            decreasing = true;
        }
    }

    return increasing && decreasing;
    }
};