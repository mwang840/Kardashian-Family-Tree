#ifndef kardashian_graph_HPP_
#define kardashian_graph_HPP_
#include <iostream>
using namespace std;

class kardashian_graph {
    friend class treeInterface;
	int vertex
    kardashian_node *root;

public:
    kardashian_graph();
    kardashian_graph(string fName, string lName, int age, string birthLocation);
    bool welcomeToTheFamily(string fName, string lName, int age, string birthLocation);
    void printTreeIO();
	void printTreeIO(kardashian_node *n);
	void printTreePre();
	void printTreePre(kardashian_node *n);
	void printTreePost();
	void printTreePost(kardashian_node *n);
	void clearTree();
	void clearTree(kardashian_node *tmp);
	kardashian_node *divorceNoKids(kardashian_node *tmp);
	kardashian_node *divorceOneKid(kardashian_node *tmp, bool leftFlag);
	kardashian_node *divorce(string fName, string lName);
	kardashian_node *minValNode(kardashian_node *n);
    kardashian_node *maxValNode(kardashian_node *n);
	void setHeight(kardashian_node *n);
    int getBalance(kardashian_node *tmp);
	//kardashian_node *rotateRight(kardashian_node *tmp);
	//kardashian_node *rotateLeft(kardashian_node *tmp);
};




#endif /* kardashian_tree_HPP_ */