#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int firstE = INT_MIN;
        int secondE = INT_MIN;

        int cnt1 = 0;
        int cnt2 = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (cnt1 == 0 && secondE != nums[i])
            {
                firstE = nums[i];
                cnt1 = 1;
            }
            else if (cnt2 == 0 && firstE != nums[i])
            {
                secondE = nums[i];
                cnt2 = 1;
            }
            else if (nums[i] == firstE)
            {
                cnt1++;
            }
            else if (nums[i] == secondE)
            {
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }

        vector<int> ans;
        cnt1 = 0;
        cnt2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == firstE)
                cnt1++;
            if (nums[i] == secondE)
                cnt2++;
        }
        int limit = (nums.size() / 3);
        if (cnt1 > limit)
            ans.push_back(firstE);
        if (cnt2 > limit)
            ans.push_back(secondE);

        return ans;
    }
};