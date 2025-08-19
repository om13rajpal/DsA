#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution
{
public:
    long long hours(vector<int> &nums, long long h)
    {
        long long sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += ceil(double(nums[i]) / h);
        }
        return sum;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {
        long long l = 1;
        long long r = *max_element(piles.begin(), piles.end());

        int speed = r;
        while (l <= r)
        {
            long long mid = l + (r - l) / 2;
            long long totalHours = hours(piles, mid);

            if (totalHours <= h)
            {
                speed = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return speed;
    }
};