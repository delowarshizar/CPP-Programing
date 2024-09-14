#include <iostream>
#include <list>
#include <vector>

class Graph {
    int V; // Number of vertices
    std::list<int>* adj; // Pointer to an array containing adjacency lists

    void DFSUtil(int v, std::vector<bool>& visited); // A function used by DFS

public:
    Graph(int V);
    void addEdge(int v, int w);
    void DFS(int v);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new std::list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w); // Add w to v's list
}

void Graph::DFSUtil(int v, std::vector<bool>& visited) {
    visited[v] = true;
    std::cout << v << " ";

    for (auto i = adj[v].begin(); i != adj[v].end(); ++i) {
        if (!visited[*i]) {
            DFSUtil(*i, visited);
        }
    }
}

void Graph::DFS(int v) {
    std::vector<bool> visited(V, false); // Mark all nodes as not visited initially

    DFSUtil(v, visited);
}

int main() {
    int V, E;
    std::cout << "Enter number of vertices: ";
    std::cin >> V;

    Graph g(V);

    std::cout << "Enter number of edges: ";
    std::cin >> E;

    std::cout << "Enter edges (v1 v2 for each edge):\n";
    for (int i = 0; i < E; i++) {
        int v1, v2;
        std::cin >> v1 >> v2;
        g.addEdge(v1, v2);
    }

    int startVertex;
    std::cout << "Enter starting vertex for DFS: ";
    std::cin >> startVertex;

    std::cout << "Depth First Traversal starting from vertex " << startVertex << ":\n";
    g.DFS(startVertex);

    return 0;
}