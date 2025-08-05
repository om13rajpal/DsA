#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> s;
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++)
        {
            s.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            s.insert(nums2[i]);
        }

        for (auto num : s)
        {
            ans.push_back(num);
        }

        return ans;
    }
};