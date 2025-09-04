#include <vector>
#include <queue>
#include <iostream>

using namespace std;

class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        int minutes = 0;
        queue<pair<pair<int, int>, int>> q;

        int n = grid.size();
        int m = grid[0].size();
        int fresh = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 2)
                {
                    q.push({{i, j}, minutes});
                }
                else if (grid[i][j] == 1)
                {
                    fresh++;
                }
            }
        }

        while (!q.empty())
        {
            int dRow[] = {-1, 0, 1, 0};
            int dCol[] = {0, 1, 0, -1};

            int row = q.front().first.first;
            int col = q.front().first.second;

            minutes = q.front().second;

            for (int i = 0; i < 4; i++)
            {
                int nr = row + dRow[i];
                int nc = col + dCol[i];

                if (nr >= 0 && nr < n && nc >= 0 && nc < m)
                {
                    if (grid[nr][nc] == 1)
                    {
                        q.push({{nr, nc}, minutes + 1});
                        grid[nr][nc] = 2;
                        fresh--;
                    }
                }
            }

            q.pop();
        }

        if (fresh == 0)
        {
            return minutes;
        }
        else
        {
            return -1;
        }
    }
};