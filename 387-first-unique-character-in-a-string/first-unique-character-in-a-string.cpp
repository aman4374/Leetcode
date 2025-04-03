class Solution {
public:
    int firstUniqChar(string s) {

       unordered_map<char, int> freq;
        
        // Count frequency of each character
        for (char c : s) {
            freq[c]++;
        }

        // Print frequency of each character
        cout << "Character Frequencies:\n";
        for (auto it : freq) {
            cout << it.first << ": " << it.second << endl;
        }

        // Find first unique character
        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i]] == 1) return i;
        }
        
        return -1;
    }
};