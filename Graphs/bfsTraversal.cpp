vector<int> bfsNode(int node, vector<int> * adj, 
                    vector<int> &vis, vector<int> &bfs) {
    queue<int> store;
    store.push(node);
    while (!store.empty()) {
        int parent = store.front();
        bfs.push_back(parent);
        store.pop();
        for (auto child: adj[parent]) {
            if (vis[child] == 0) {
                store.push(child);
                vis[child] = 1;
            }
        }
    }
}

void bfsTraversal(vector<int> * adj, int nodes) {
    vector<int>int vis(nodes+1, 0);
    vector<int> bfs(nodes);
    for (int i = 1; i <= nodes; i += 1) {
        if (vis[i] == 0) {
            vis[i] = 1;
            bfs(i, adj, vis);
        }
    }
}
