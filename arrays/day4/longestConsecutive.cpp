#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        if(nums.size() == 0) return 0;

        for(int i = 0; i < nums.size(); i++){
            s.insert(nums[i]);
        }

        int longest = 1;
        for(auto it: s) {
            if(s.find(it - 1) == s.end()) {
        int size = 1;
                int x = it;
                while(s.find(x + 1) != s.end()){
                    size++;
                    x += 1;
                }
                longest = max(longest, size);
            }
        }

        return longest;
    }
};