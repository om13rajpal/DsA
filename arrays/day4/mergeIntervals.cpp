#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        for (int i = 0; i < intervals.size(); i++)
        {
            if (i == 0)
            {
                ans.push_back(intervals[i]);
            }
            else
            {
                if (ans.back()[1] >= intervals[i][0])
                {
                    ans.back()[0] = min(ans.back()[0], intervals[i][0]);
                    ans.back()[1] = max(ans.back()[1], intervals[i][1]);
                }
                else
                {
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans;
    }
};