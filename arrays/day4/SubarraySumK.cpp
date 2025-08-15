#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int count = 0;
        int sum = 0;
        unordered_map<int, int> mpp;

        mpp[0] = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];

            int rem = sum - k;

            if (mpp.find(rem) != mpp.end())
            {
                count += mpp[rem];
            }

            mpp[sum]++;
        }
        return count;
    }
};