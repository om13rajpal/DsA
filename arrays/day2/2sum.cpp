#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> v;
        for(int i = 0; i < nums.size(); i++){
            v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end());

        int first = -1;
        int second = -1;

        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            if (v[i].first + v[j].first == target) {
                first = v[i].second;
                second = v[j].second;
                break;
            } else if (v[i].first + v[j].first > target) {
                j--;
            } else {
                i++;
            }
        }

        return {first, second};
    }
};