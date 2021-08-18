bool isBipartiteNode(vector<int> graph[], vector<int> & color, int node) {
    for (auto child: node) {
        if (color[child] == -1) {
            color[child] = 1-color[node];
            if (!isBipartiteNode(graph, color, child)){
                return false;
            }
        }
        else {
            if (color[child] == color[node]) {
                return false;
            }
        }
    }
    return true;
}


bool isBipartite(vector<int> graph[], int totalNodes) {
    vector<int> color(totalNodes+1, -1);
    for (int i = 1; i <= totalNodes; i += 1) {
        if (color[i] == -1) {
            color[i] = 0;
            if (!isBipartiteNode(graph, color, i)) {
                return false;
            }
        }
    }
    return true;
}
