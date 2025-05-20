class Solution {
public:
    double trimMean(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int trim = n / 20;           // 5% of n
    int start = trim;
    int end = n - trim;          // one past the last included index

    double sum = 0.0;
    for (int i = start; i < end; ++i) {
        sum += arr[i];
    }

    int count = end - start;     // n - 2*trim
    return sum / count;
    }
};