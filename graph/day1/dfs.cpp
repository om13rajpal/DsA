#include <vector>
using namespace std;

class Solution
{
public:
    void dfs(int node, vector<int> adj[], vector<int> &visited, vector<int> &df)
    {
        visited[node] = 1;
        df.push_back(node);

        for (auto v : adj[node])
        {
            if (visited[v] != 1)
            {
                dfs(v, adj, visited, df);
            }
        }
    }

    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> visited(V, 0);
        vector<int> df;

        dfs(0, adj, visited, df);

        return df;
    }
};
