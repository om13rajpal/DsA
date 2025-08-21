#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int possibleBouquets(vector<int> &bloomDay, int day, int k)
    {
        int count = 0;
        int possible = 0;

        for (int i = 0; i < bloomDay.size(); i++)
        {
            if (bloomDay[i] <= day)
            {
                count++;
            }
            else
            {
                possible += count / k;
                count = 0;
            }
        }

        possible += count / k;

        return possible;
    }

    int minDays(vector<int> &bloomDay, int m, int k)
    {
        int n = bloomDay.size();

        if (m * k > n)
            return -1;
        int l = *min_element(bloomDay.begin(), bloomDay.end());
        int r = *max_element(bloomDay.begin(), bloomDay.end());

        int answer = -1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            int possibleCount = possibleBouquets(bloomDay, mid, k);

            if (possibleCount >= m)
            {
                answer = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return answer;
    }
};