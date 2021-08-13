void dfsNode(vector<int> * graph, vector<int> &visited, 
            vector<int> dfsTraversal, int node) {
    dfsTraversal.push_back(node);
    for (auto child: node){
        if (!visited[child]) {
            visited[child] = true;
            dfsNode(graph, visited, dfsTraversal, child);
        }
    }
}

vector<int> dfs(vector<int> *graph, int nodes) {
    vector<int> dfsTraversal;
    vector<bool> visited(nodes+1, false);
    for (int i = 1; i <= nodes; i += 1) {
        if (!visited[i]) {
            visited[i] = true;
            dfsNode(graph, visited, dfsTraversal, i);
        }
    }
}
