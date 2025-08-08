#include <vector>
using namespace std;
#include <algorithm>

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      int max = INT_MIN;
      vector<int> ans;

      for(int i = nums.size() - 1; i >= 0; i--){
        if(nums[i] > max){
            max = nums[i];
            ans.push_back(nums[i]);
        }
      }
      reverse(ans.begin(), ans.end());
      return ans;
    }
};