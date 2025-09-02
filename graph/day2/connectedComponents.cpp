#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    void adjList(vector<vector<int>> &adj, vector<vector<int>> &edges)
    {
        for (int i = 0; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
    }
    void dfs(vector<vector<int>> &adj, vector<int> &visited, int node)
    {
        visited[node] = 1;
        for (int i = 0; i < adj[node].size(); i++)
        {
            if (visited[adj[node][i]] == 0)
            {
                dfs(adj, visited, adj[node][i]);
            }
        }
    }

    int findNumberOfComponent(int V, vector<vector<int>> &edges)
    {
        int components = 0;
        vector<int> visited(V, 0);
        vector<vector<int>> adj(V);

        adjList(adj, edges);

        for (int i = 0; i < V; i++)
        {
            if (visited[i] == 0)
            {
                components++;
                dfs(adj, visited, i);
            }
        }

        return components;
    }
};