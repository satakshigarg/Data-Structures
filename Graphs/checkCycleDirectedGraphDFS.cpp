bool isCycleDFS(vector<int> graph[], vector<bool> &visited,
                int node, vector<bool> & dfsVisited) {
    visited[node] = true;
    dfsVisited[node] = true;
    for (auto child: node) {
        if (!visited[node]) {
            if (isCycleDFS(graph, visited, child, dfsVisited)) {
                return true;
            }
        }
        else {
            if (dfsVisited[node]) {
                return true;
            }
        }
    }
    dfsVisited[node] = false;
    return false;
}

bool detectCycleDirectedGraph(vector<int> graph[], int totalNodes) {
    vector<bool> visited(totalNodes+1, false);
    vector<bool> dfsVisited(totalNodes+1, false);
    for (int i = 1; i <= totalNodes; i += 1) {
        if (!visited[i]) {
            if (isCycleDFS(graph, visited, i, dfsVisited)) {
                return true;
            }
        }
    }
    return false;
    
}
