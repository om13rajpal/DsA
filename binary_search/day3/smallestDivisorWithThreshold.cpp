#include <vector>
#include <algorithm>
#include <cmath>
#include <limits.h>

using namespace std;

class Solution
{
public:
    int arraySum(vector<int> &nums, int num)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += ceil((double)nums[i] / num);
        }

        return sum;
    }

    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int l = 1;
        int r = *max_element(nums.begin(), nums.end());

        int divisor = INT_MAX;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            int sum = arraySum(nums, mid);

            if (sum <= threshold)
            {
                divisor = min(mid, divisor);
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return divisor;
    }
};