class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> freq;

    // Count frequency of each character
    for (char c : s) {
        freq[c]++;
    }

    // Use a set to store unique frequencies
    unordered_set<int> uniqueFreq;
    for (auto& pair : freq) {
        uniqueFreq.insert(pair.second);
    }

    // If all frequencies are the same, set size should be 1
    return uniqueFreq.size() == 1;
    }
};