#ifndef kardashian_graph_HPP_
#define kardashian_graph_HPP_
#include <iostream>
#include <stdlib.h>
#include <list>
using namespace std;

class kardashian_graph {
    friend class treeInterface;
    int totalVerticies;
	int vertex;
	int **adjust;
    int start;
    string *information;
    bool *visited;
    int *currDistances;
    int *prev;
public:
    kardashian_graph(int age, string kardashians[], int first);
};




#endif /* kardashian_graph_HPP_ */