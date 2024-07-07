//tairmazriv@gmail.com
//id: 209188382

#include "Graph.hpp"
#include <iostream>
#include <vector>
using namespace std;

namespace ariel{
    void Graph::loadGraph(const vector<vector<int>>& matrix){
        // Check if the matrix is square
        size_t n = matrix.size();
        for (size_t i = 0; i < n; ++i) {
            if (matrix[i].size() != n) {
                throw invalid_argument("Invalid graph: The graph is not a square matrix.");
            }
        }
        this->Matrix = matrix;    
        };

    void Graph::printGraph() {
        size_t n = Matrix.size();
        cout << "Graph with " << n << " vertices and ";
        int edges = 0;
        for (size_t i = 0; i < n; ++i) {
            for (size_t j = 0; j < n; ++j) {
                if (Matrix[i][j] != 0) {
                    edges++;
                }
            }
        }
        cout << edges << " edges." << endl;

    }

}
