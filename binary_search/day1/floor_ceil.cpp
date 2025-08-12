#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x)
    {
        int l = 0;
        int r = nums.size() - 1;

        int floor = -1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] <= x)
            {
                floor = nums[mid];
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        l = 0;
        r = nums.size() - 1;

        int ceil = -1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] >= x)
            {
                ceil = nums[mid];
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return {floor, ceil};
    }
};