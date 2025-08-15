#include <vector>
using namespace std;

class Solution
{
public:
    int countOccurrences(const vector<int> &arr, int target)
    {
        int l = 0;
        int r = arr.size() - 1;
        int first = -1;
        int second = -1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (arr[mid] == target)
            {
                first = mid;
                r = mid - 1;
            }
            else if (arr[mid] > target)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (first == -1)
            return 0;

        l = 0;
        r = arr.size() - 1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (arr[mid] == target)
            {
                second = mid;
                l = mid + 1;
            }
            else if (arr[mid] > target)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return second - first + 1;
    }
};