#include <vector>
#include <queue>
using namespace std;

class Solution
{
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> visited(n, vector<int>(m, 0));
        vector<vector<int>> distance(n, vector<int>(m, 0));

        queue<pair<pair<int, int>, int>> q;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 0)
                {
                    visited[i][j] = 1;
                    q.push({{i, j}, 0});
                }
            }
        }

        while (!q.empty())
        {
            int dRow[] = {-1, 0, 1, 0};
            int dCol[] = {0, 1, 0, -1};

            int row = q.front().first.first;
            int col = q.front().first.second;
            int dist = q.front().second;

            distance[row][col] = dist;
            q.pop();
            for (int i = 0; i < 4; i++)
            {
                int r = row + dRow[i];
                int c = col + dCol[i];

                if (r >= 0 && r < n && c >= 0 && c < m)
                {
                    if (visited[r][c] != 1)
                    {
                        visited[r][c] = 1;
                        q.push({{r, c}, dist + 1});
                    }
                }
            }
        }

        return distance;
    }
};