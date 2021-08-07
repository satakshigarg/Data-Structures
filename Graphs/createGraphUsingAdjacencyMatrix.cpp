#include <iostream>

using namespace std;

void insertEdge(int source, int dest, int* adj) {
    adj[source][dest] = 1;
    adj[dest][source] = 1;
}

void defineGraph(int nodes, int *adj) {
    int adj[n+1][n+1];
    for (int i = 0; i <= n; i += 1) {
        for (int j = 0; j <=  n; j += 1) {
            adj[i][j] = 0;
        }
    }
}
