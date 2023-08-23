//Function to find the shortest distance of all the vertices
//from the source vertex S.

class Solution
{
public:
    struct CompareSecond {
        bool operator()(const pair<int, int>& left, const pair<int, int>& right) const {
            return left.second > right.second;
        }
    };

    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {

        vector<int> res(V, INT_MAX);
        vector<int> visited(V, 0);
        res[S] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, CompareSecond > q;
        q.push({ S,0 });
        while (!q.empty()) {
            int u = q.top().first;
            q.pop();
            if (visited[u]) continue;
            visited[u] = 1;
            for (auto edj : adj[u]) {
                int v = edj[0];
                int w = edj[1];

                if (res[v] > res[u] + w) {
                    res[v] = res[u] + w;
                    q.push({ v,res[v] });
                }
            }

        }

        return res;


    }
};