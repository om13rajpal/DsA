#include <vector>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums, int k)
    {
        int l = 0;
        int length = 0;
        int sum = 0;
        for (int r = 0; r < nums.size(); r++)
        {
            sum += nums[r];
            while (sum > k)
            {
                sum -= nums[l];
                l++;
            }
            if (sum == k)
            {
                length = max(length, r - l + 1);
            }
        }

        return length;
    }
};
