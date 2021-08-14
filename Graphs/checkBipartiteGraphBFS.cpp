bool checkBipartite(vector<int> * graph, int nodes) {
    vector<int> color(nodes + 1, -1);
    for (int i = 1; i <= nodes; i += 1) {
        if (!visited[i]) {
            queue<int> bfsQueue;
            bfsQueue.push(i);
            color[i] = 1;
            while (!bfsQueue.empty()) {
                int node = bfsQueue.front();
                bfsQueue.pop();
                for (auto child: graph[node]) {
                    if (color[child] == -1) {
                        color[child] = 1 - color[node];
                        bfsQueue.push(child);
                    }
                    else {
                        if (color[child] == color[node]) {
                            return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}
