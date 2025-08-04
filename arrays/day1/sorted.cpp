#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int change = 0;
        if (nums[0] < nums[nums.size() - 1])
            change++;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) {
                change++;
            }
        }

        return (change == 0 ||  change == 1);
    }
};