#include <vector>
#include <queue>

using namespace std;

class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                  int color)
    {
        int n = image.size();
        int m = image[0].size();
        queue<pair<int, int>> q;

        int initColor = image[sr][sc];

        if (initColor == color)
            return image;
        image[sr][sc] = color;
        q.push({sr, sc});

        int dRow[] = {-1, 0, 1, 0};
        int dCol[] = {0, 1, 0, -1};

        while (!q.empty())
        {

            int r = q.front().first;
            int c = q.front().second;

            q.pop();

            for (int i = 0; i < 4; i++)
            {
                int row = r + dRow[i];
                int col = c + dCol[i];

                if (row >= 0 && row < n && col >= 0 && col < m)
                {
                    if (image[row][col] == initColor)
                    {
                        image[row][col] = color;
                        q.push({row, col});
                    }
                }
            }
        }

        return image;
    }
};