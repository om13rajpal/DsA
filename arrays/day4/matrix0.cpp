#include <set>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> row;
        set<int> col;
        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }

        for (auto it : row) {
            for (int i = 0; i < n; i++) {
                matrix[it][i] = 0;
            }
        }

        for(auto it: col){
            for(int i = 0; i < m; i++){
                matrix[i][it] = 0;
            }
        }
    }
};