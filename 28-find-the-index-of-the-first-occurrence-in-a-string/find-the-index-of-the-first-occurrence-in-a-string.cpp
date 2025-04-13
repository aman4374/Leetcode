class Solution {
public:
    int strStr(string haystack, string needle) {
        int hLen = haystack.length();
        int nLen = needle.length();

        // Edge case: if needle is empty
        if (nLen == 0) return 0;

        // Loop through haystack to find the first match
        for (int i = 0; i <= hLen - nLen; i++) {
            if (haystack.substr(i, nLen) == needle) {
                return i;
            }
        }

        // If no match found
        return -1;
    }
};
