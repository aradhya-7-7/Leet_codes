class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
     vector<int> results;
        for (int i = left; i <= right; i++) {
            int val = i;
            while (val > 0) {
                int digit = val % 10;
                if (digit == 0 || i % digit != 0) {
                    break;
                }
                val /= 10;
            }
            if (val == 0) {
                results.push_back(i);
            }
        }
        return results;   
    }
};