class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> answer;
        int low = 1, high = k + 1;

        // First build the part with exactly k distinct differences
        while (low <= high) {
            if (low == high) {
                answer.push_back(low++);
            } else {
                answer.push_back(low++);
                answer.push_back(high--);
            }
        }

        // Add the remaining numbers in ascending order
        for (int i = k + 2; i <= n; ++i) {
            answer.push_back(i);
        }

        return answer;
    }
};
