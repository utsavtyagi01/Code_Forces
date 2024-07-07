class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
    
        vector<vector<pair<int, int>>> edge(N);
        vector<int> indegree(N, 0);
        
        for (auto& it : edges) {
            edge[it[0]].emplace_back(it[1], it[2]);
            indegree[it[1]]++;
        }
        
        queue<int> q;
        for (int i = 0; i < N; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> topo;
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            topo.push_back(curr);
            
            for (auto& i : edge[curr]) {
                indegree[i.first]--;
                if (indegree[i.first] == 0) {
                    q.push(i.first);
                }
            }
        }
        
        vector<int> dist(N, INT_MAX);
        dist[0] = 0;

        for (auto& i : topo) {
            if (dist[i] != INT_MAX) {
                for (auto& j : edge[i]) {
                    if (dist[i] + j.second < dist[j.first]) {
                        dist[j.first] = dist[i] + j.second;
                    }
                }
            }
        }
        for (int i = 0; i < N; i++) {
            if (dist[i] == INT_MAX) {
                dist[i] = -1;
            }
        }
        return dist;
    }
};
