#include <vector>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {

        if(nums.size() < 2) return -1;
        int largest = INT_MIN;
        int sec_largest = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > largest){
                sec_largest = largest;
                largest = nums[i];
            } else if (nums[i] > sec_largest && nums[i] < largest) {
                sec_largest = nums[i];
            }
        }

        return (sec_largest == INT_MIN) ? -1 : sec_largest;
      
    }
};