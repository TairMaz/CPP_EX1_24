//tairmazriv@gmail.com
//id: 209188382

#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <vector>
using namespace std;

namespace ariel{
    class Graph{

        public:
            vector<vector<int>> Matrix;

            void loadGraph(const vector<std::vector<int>>& matrix);

            void printGraph();

    };
}

#endif // GRAPH_HPP

