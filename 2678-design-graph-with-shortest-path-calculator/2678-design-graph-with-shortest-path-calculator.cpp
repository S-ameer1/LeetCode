#define pii pair<int,int>
class Graph {
    vector<vector<pair<int,int>>>adj;
public:
    Graph(int n, vector<vector<int>>& edges) {
        adj.resize(n);
        for(auto&i:edges){
            int a=i[0];
            int b=i[1];
            int c=i[2];
            adj[a].push_back({b,c});
        }
    }
    
    void addEdge(vector<int> edge) {
        int a=edge[0];
            int b=edge[1];
            int c=edge[2];
            adj[a].push_back({b,c});
    }
    
    int shortestPath(int node1, int node2) {
        vector<int>dist(adj.size(),INT_MAX);
        dist[node1]=0;
        priority_queue<pii,vector<pii>,greater<pii>>pq;
        pq.push({0,node1});
        while(!pq.empty()){
            int d=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            if(node==node2)return d;
            for(auto&neighbor:adj[node]){
                int newDist=d+neighbor.second;
                int newNode=neighbor.first;
                if(newDist<dist[newNode]){
                    dist[newNode]=newDist;
                    pq.push({newDist,newNode});
                }
            }
        }
        return -1;

    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */