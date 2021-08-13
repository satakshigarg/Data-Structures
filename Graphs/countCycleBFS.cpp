int detectCycleBFS(vector<int> * graph, int nodes){
    vector<bool> visited(nodes+1, false);
    int cycles = 0;
    for (int i = 1; i <= nodes; i += 1) {
        if (!visited[i]) {
            visited[i] = true;
            queue<pair<int, int>> bfsQueue;
            bfsQueue.push({i, -1});
            while (!bfsQueue.empty()) {
                int parent = bfsQueue.front().second;
                int node = bfsQueue.front().first;
                bfsQueue.pop();
                for (auto child: graph[node]) {
                    if (!visited[child]) {
                        visited[child] = true;
                        bfsQueue.push({child, node});
                    }
                    else if (child != parent) {
                        cycles += 1;
                    }
                }
            }
        }
    }
    return cycles;
}
