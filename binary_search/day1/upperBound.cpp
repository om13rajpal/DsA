#include <vector>
using namespace std;

class Solution
{
public:
    int upperBound(vector<int> &nums, int x)
    {
        int l = 0;
        int r = nums.size() - 1;

        int index = nums.size();

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (nums[mid] <= x)
            {
                l = mid + 1;
            }
            else
            {
                index = mid;
                r = mid - 1;
            }
        }

        return index;
    }
};