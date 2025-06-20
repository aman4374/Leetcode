class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
    vector<vector<int>> result;
    int n = s.size();
    
    int start = 0; // start index of the current group

    for (int i = 1; i <= n; ++i) {
        // Either end of string or end of group
        if (i == n || s[i] != s[start]) {
            if (i - start >= 3) {
                result.push_back({start, i - 1});
            }
            start = i; // start of next group
        }
    }

    return result;
    }
};