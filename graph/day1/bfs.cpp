#include <vector>
#include <queue>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    vector<int> bfs;
    queue<int> q;
    vector<int> visited(V, 0);

    q.push(0);
    visited[0] = 1;

    while (!q.empty())
    {
        int vertex = q.front();
        bfs.push_back(vertex);
        q.pop();
        for (auto v : adj[vertex])
        {
            if (visited[v] != 1)
            {
                q.push(v);
                visited[v] = 1;
            }
        }
    }

    return bfs;
}