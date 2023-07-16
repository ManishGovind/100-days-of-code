/*
transitive closure
*/

void dfs(vector<vector<int>> graph, int src, vector<bool>& visited, vector<int>& v)
{
    visited[src] = true;
    v.push_back(src);
    for (int i = 0; i < graph[src].size(); i++)
    {
        if (visited[i] == false && graph[src][i] == 1)
        {
            dfs(graph, i, visited, v);
        }
    }
}
vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
{
    // code here
    vector<vector<int>> trans(N, vector<int>(N, 0));
    for (int i = 0; i < N; i++)
    {
        vector<bool> visited(N, false);
        vector<int> v;
        dfs(graph, i, visited, v);
        for (int j = 0; j < v.size(); j++)
            trans[i][v[j]] = 1;
    }
    return trans;
}


//  code to find the transitive closure of a graph using warshall algorithm

class Solution {
public:
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {

        vector<vector<int>> trans = graph;
        // since every vertex is reachable to itself
        for (int i = 0; i < n; i++)
            trans[i][i] = 1;
        // using Warshall's algo to see whether can
        // reach through an intermediate value node
        for (int val = 0; val < n; val++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    trans[i][j] = trans[i][j] || (trans[i][val]
                        && trans[val][j]);
                }
            }
        }
        return trans;
    }
};