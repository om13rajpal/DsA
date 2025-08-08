#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();

        int l = 0;
        int r = n - 1;

        int t = 0;
        int b = m - 1;

        while (l <= r && t <= b) {
            for (int i = l; i <= r; i++) {
                ans.push_back(matrix[t][i]);
            }
            t++;

            for (int i = t; i <= b; i++) {
                ans.push_back(matrix[i][r]);
            }
            r--;

            if (l <= r && t <= b) {
                for (int i = r; i >= l; i--) {
                    ans.push_back(matrix[b][i]);
                }
                b--;
            }

            if (t <= b && l <= r) {
                for (int i = b; i >= t; i--) {
                    ans.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return ans;
    }
};