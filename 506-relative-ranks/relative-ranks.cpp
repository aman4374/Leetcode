class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
    int n = score.size();
    vector<int> sortedScore = score;  // Copy of the original scores
    sort(sortedScore.rbegin(), sortedScore.rend());  // Sort in descending order

    unordered_map<int, string> rankMap;

    // Assign ranks
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            rankMap[sortedScore[i]] = "Gold Medal";
        } else if (i == 1) {
            rankMap[sortedScore[i]] = "Silver Medal";
        } else if (i == 2) {
            rankMap[sortedScore[i]] = "Bronze Medal";
        } else {
            rankMap[sortedScore[i]] = to_string(i + 1);
        }
    }

    // Create the answer based on original order
    vector<string> result(n);
    for (int i = 0; i < n; ++i) {
        result[i] = rankMap[score[i]];
    }

    return result;
    }
};