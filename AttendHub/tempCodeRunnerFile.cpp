#include <iostream>
#include <vector>

using namespace std;

// Function to print the adjacency matrix representation of the graph
void printGraph(vector<vector<int>>& graph) {
    int n = graph.size();
    cout << "Adjacency Matrix Representation of the Graph:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    
    cout << "Enter the number of vertices (n): ";
    cin >> n;
    
    // Create an empty graph with n vertices
    vector<vector<int>> graph(n, vector<int>(n, 0));
    
    // Generate input graph by taking input for edges
    cout << "Enter the edges (vertex pairs) in the format 'u v' (0-indexed), -1 to stop:\n";
    int u, v;
    while (true) {
        cin >> u;
        if (u == -1) break;
        cin >> v;
        if (u >= n || v >= n || u < 0 || v < 0) {
            cout << "Invalid vertex index!\n";
            continue;
        }
        // Assuming the graph is undirected, so setting both edges
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    
    // Print the adjacency matrix representation of the graph
    printGraph(graph);
    
    return 0;
}
