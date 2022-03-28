#ifndef kardashian_treen_HPP_
#define kardashian_tree_HPP_
#include <iostream>
using namespace std;

class kardashian_tree {
    friend class treeInterface;
    kardashian_node *root;

public:
    kardashian_tree();
    kardashian_tree(string fName, string lName, int age, string birthLocation);
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
	TNode *rotateRight(TNode *tmp);
	TNode *rotateLeft(TNode *tmp);
};




#endif /* kardashian_tree_HPP_ */