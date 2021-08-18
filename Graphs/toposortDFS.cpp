void dfsToposort(vector<int> graph[], Stack<int> &reverseSortedElements, vector<int> &visited, int node) {
    visited[node] = true;
    
    for (auto child: node) {
        if (!visited[child]) {
            dfsToposort(graph, reverseSortedElements, visited, child);
        }
    }
    
    reverseSortedElements.push(node);
}

vector<int> toposort(vector<int> graph[], int totalNodes) {
    vector<bool> visited(totalNodes+1, false);
    stack<int> reverseSortedElements;
    for (int i = 1; i <= totalNodes; i += 1) {
        if (!visited[i]) {
            dfsToposort(graph, reverseSortedElements, visited, i);
        }
    }
    vector<int> sortedElements;
    while (!reverseSortedElements.empty()) {
        sortedElements.push_back(reverseSortedElements.top());
        reverseSortedElements.pop();
    }
    return sortedElements;
}
