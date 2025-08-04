#include <vector>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            largest = max(largest, nums[i]);
        }

        return largest;
    }
};