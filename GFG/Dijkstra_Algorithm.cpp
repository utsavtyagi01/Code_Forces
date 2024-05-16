vector<int> func(int s,int v, vector<vector<int>> adj[]){
         vector<int> ans;
         vector<int> dist(v,INT_MAX);
         vector<int> visited(v,0);
         multiset<pair<int,int> > q;
         q.insert({0,s});
         dist[s]=0;
         visited[s]=1;
         while(q.size()>0){
             auto it=q.begin();
             int curr_dist=it->first;
             int curr_vertex=it->second;
             q.erase(q.begin());
             for(auto i:adj[curr_vertex]){
                 int wt=i[1];
                 int vtx=i[0];
                 if(dist[vtx]>dist[curr_vertex]+wt){
                     dist[vtx]=dist[curr_vertex]+wt;
                     q.insert({dist[vtx],vtx});
                 }
             }
             visited[curr_vertex]=1;
         }
         return dist;
    }
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        return func(S,V,adj);
    }
