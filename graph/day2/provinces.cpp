#include <vector>
using namespace std;

class Solution
{
public:
    void dfs(vector<vector<int>> &mat, vector<int> &visited, int node)
    {
        visited[node] = 1;
        for (int v = 0; v < mat.size(); v++)
        {
            if (mat[node][v] == 1 && visited[v] == 0)
            {
                dfs(mat, visited, v);
            }
        }
    }

    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int v = isConnected.size();
        vector<int> visited(v, 0);

        int provinces = 0;

        for (int i = 0; i < v; i++)
        {
            if (visited[i] == 0)
            {
                provinces++;
                dfs(isConnected, visited, i);
            }
        }

        return provinces;
    }
};