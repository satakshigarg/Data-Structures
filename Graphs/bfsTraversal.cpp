void bfsNode(vector<int> * graph, vector<int> & bfsTraversal, 
            vector<int> & visited, int node) {
    queue<int> bfsQueue;
    bfsQueue.push(node);
    while (!bfsQueue.empty()) {
        int parent = bfsQueue.front();
        bfsQueue.pop();
        bfsTraversal.push_back(parent);
        for (auto child: parent) {
            if (!visited[child]) {
                bfsQueue.push(child);
                visited[child] = true;
            }
        }
    }
}

vector<int> bfs(vector<int> * graph, int nodes, int edges) {
    vector<int> bfsTraversal;
    vector<bool> visited(nodes+1, false);
    for (int i = 1; i <= nodes; i += 1) {
        if (!visited[i]) {
            visited[i] = true;
            bfsNode(graph, bfsTraversal, visited, i);
        }
    }
    return bfsTraversal;
    
}
