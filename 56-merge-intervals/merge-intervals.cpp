class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {{}};

    // Step 1: Sort the intervals based on the starting time
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> merged;
    merged.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++) {
        // If the current interval overlaps with the last one in the merged list
        if (intervals[i][0] <= merged.back()[1]) {
            // Merge them by updating the end of the last interval in merged
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        } else {
            // No overlap, add the current interval
            merged.push_back(intervals[i]);
        }
    }

    return merged;

    }
};