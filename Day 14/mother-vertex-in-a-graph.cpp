class Solution
{
public:
    //Function to find a Mother Vertex in the Graph.
    bool bfs(int v, int V, vector<int>adj[]) {
        vector<int> visited(V, 0);
        queue<int> q;
        q.push(v);
        visited[v] = 1;
        int num = 0;
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            num++;
            for (int it : adj[curr]) {
                if (!visited[it]) {
                    q.push(it);
                    visited[it] = 1;
                }
            }
        }
        return num == V;
    }
    int findMotherVertex(int V, vector<int>adj[])
    {

        for (int v = 0; v < V; v++) {
            if (bfs(v, V, adj)) return v;
        }


        return -1;
    }

};