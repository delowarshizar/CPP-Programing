#include <iostream>
#include <list>
#include <queue>
#include <vector>

class Graph {
    int V; // Number of vertices
    std::list<int>* adj; // Pointer to an array containing adjacency lists

public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int s);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new std::list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w); // Add w to v's list
}

void Graph::BFS(int s) {
    std::vector<bool> visited(V, false); // Mark all nodes as not visited initially
    std::queue<int> queue;

    visited[s] = true;
    queue.push(s);

    while (!queue.empty()) {
        s = queue.front();
        std::cout << s << " ";
        queue.pop();

        for (auto i = adj[s].begin(); i != adj[s].end(); ++i) {
            if (!visited[*i]) {
                visited[*i] = true;
                queue.push(*i);
            }
        }
    }
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
    std::cout << "Enter starting vertex for BFS: ";
    std::cin >> startVertex;

    std::cout << "Breadth First Traversal starting from vertex " << startVertex << ":\n";
    g.BFS(startVertex);

    return 0;
}