#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool possible(vector<int> &weights, int capacity, int days)
    {
        int day = 1;
        int sum = 0;
        for (int i = 0; i < weights.size(); i++)
        {
            if (sum + weights[i] > capacity)
            {
                day++;
                sum = weights[i];
            }
            else
            {
                sum += weights[i];
            }
        }

        if (day <= days)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int shipWithinDays(vector<int> &weights, int days)
    {
        int l = *max_element(weights.begin(), weights.end());
        int r = accumulate(weights.begin(), weights.end(), 0);

        int capacity = l;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            bool possibleCapacity = possible(weights, mid, days);

            if (possibleCapacity)
            {
                capacity = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return capacity;
    }
};