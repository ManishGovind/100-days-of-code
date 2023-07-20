class Solution {
public:
    // Function to detect cycle in an undirected graph.

    bool checkcycle(int start, vector<int> vis, vector<int> adj[]) {

        queue<pair<int, int>> q;
        q.push({ start,-1 });
        vis[start] = 1;

        while (!q.empty()) {
            int curr = q.front().first;
            int parent = q.front().second;
            q.pop();

            for (int a : adj[curr]) {

                if (!vis[a]) {

                    vis[a] = 1;
                    q.push({ a, curr });
                }
                else if (a != parent) {
                    return true;
                }
            }
        }
        return false;
    }


    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        for (int v = 0; v < V; v++) {
            vector<int> vis(V, 0);
            if (checkcycle(v, vis, adj)) return true;
        }


        return false;
    }
};