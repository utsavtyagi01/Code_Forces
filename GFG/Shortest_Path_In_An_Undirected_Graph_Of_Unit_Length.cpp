//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
 vector<int> shortestPath(vector<vector<int>>& edges, int N, int M, int src) {
        // Create adjacency list
        vector<vector<int>> adj(N);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        // Initialize distance vector
        vector<int> dist(N, INT_MAX);

        // BFS initialization
        multiset<pair<int,int> > q;
        q.insert({0,src});
        dist[src] = 0;

        // BFS to find shortest path in an unweighted graph
        while (!q.empty()) {
            auto it = q.begin();
            q.erase(q.begin());
            int vtx=it->second;

            for (auto& neighbor : adj[vtx]) {
                if (dist[neighbor]>dist[vtx]+1) {
                    dist[neighbor] = dist[vtx] + 1;
                    q.insert({dist[neighbor],neighbor});
                }
            }
        }

        // Convert unreachable distances from INT_MAX to -1
        for (int i = 0; i < N; i++) {
            if (dist[i] == INT_MAX)
                dist[i] = -1;
        }

        return dist;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends
