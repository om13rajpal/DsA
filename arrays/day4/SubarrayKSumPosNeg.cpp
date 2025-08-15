#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums, int k)
    {
        unordered_map<int, int> mpp;
        int sum = 0;
        int length = 0;
        int maxLength = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];

            if (sum == k)
            {
                length = i + 1;
                maxLength = max(maxLength, length);
            }

            int remaining = sum - k;

            if (mpp.find(remaining) != mpp.end())
            {
                length = i - mpp[remaining];
                maxLength = max(maxLength, length);
            }

            if (mpp.find(sum) == mpp.end())
            {
                mpp[sum] = i;
            }
        }

        return maxLength;
    }
};
