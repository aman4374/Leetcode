class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        int count = 0;

        for (int i = 0; i < size; ++i) {
            // Check if current, previous and next plots are empty or boundaries
            if (flowerbed[i] == 0 &&
                (i == 0 || flowerbed[i - 1] == 0) &&
                (i == size - 1 || flowerbed[i + 1] == 0)) {
                
                flowerbed[i] = 1; // Plant a flower here
                count++;

                if (count >= n)
                    return true;
            }
        }

        return count >= n;
    }
};