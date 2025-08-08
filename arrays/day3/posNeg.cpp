#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int positive = 0;
        int negative = 1;
        int n = nums.size();

        vector<int> v(n, 0);

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                v[positive] = nums[i];
                positive += 2;
            } else {
                v[negative] = nums[i];
                negative += 2;
            }
        }

        return v;
    }
};