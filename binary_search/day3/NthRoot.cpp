#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

class Solution
{
public:
    int NthRoot(int N, int M)
    {
        int l = 1;
        int r = M;

        int ans = -1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (pow(mid, N) == M)
                return mid;
            if (pow(mid, N) < M)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        return ans;
    }
};
