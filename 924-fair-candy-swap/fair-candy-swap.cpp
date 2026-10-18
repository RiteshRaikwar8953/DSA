class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0, sumB = 0;

        for (int x : aliceSizes) {
            sumA += x;
        }

        for (int y : bobSizes) {
            sumB += y;
        }

        int diff = (sumB - sumA) / 2;

        for (int x : aliceSizes) {
            for (int y : bobSizes) {
                if (y - x == diff) {
                    return {x, y};
                }
            }
        }

        return {};
    }
};