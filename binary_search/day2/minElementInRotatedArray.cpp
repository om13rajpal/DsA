#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int l = 0;
        int r = nums.size() - 1;
        int smallest = INT_MAX;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (nums[l] <= nums[r])
            {
                smallest = min(smallest, nums[l]);
                break;
            }

            if (nums[l] <= nums[mid])
            {
                smallest = min(smallest, nums[l]);

                l = mid + 1;
            }
            else
            {
                smallest = min(smallest, nums[mid]);
                r = mid - 1;
            }
        }

        return smallest;
    }
};