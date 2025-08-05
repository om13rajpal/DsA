#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = INT_MIN;

        for(auto it: nums){
            if(it == 1) {
                count++;
            } else {
                maxCount = max(maxCount, count);
                count = 0;
            }
        }

        return max(count, maxCount);
    }
};