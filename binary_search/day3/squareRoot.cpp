#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    long long floorSqrt(long long n)
    {
        int l = 1;
        int r = n;
        int ans = 0;
        
        if (n == 0 || n == 1)
            return n;
        
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (mid * mid <= n)
            {
                ans = mid;
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