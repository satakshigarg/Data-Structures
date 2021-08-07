#include <iostream>

using namespace std;

void insertEdge(int source, int dest, int* adj) {
    adj[source].push_back(dest);
    adj[dest].push_back(source);
}

void defineGraph(int nodes, int *adj) {
    vector<int> adj[n+1];
}
