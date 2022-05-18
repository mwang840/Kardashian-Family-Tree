#ifndef treeInterface_HPP_
#define treeInterface_HPP_
#include <iostream>
#include <stdlib.h>
#include "kardashian_tree.hpp"
using namespace std;

class TreeInterface {
	string fn;
public:
	kardashian_tree *tree;
	TreeInterface(string filename);
	void readFile();
	void strip(string s,  int *n, string *j);

	void Interface();
//	void addPhrases();
//	void deletePhrases();
//	void printPhrases();

};


#endif /*treeInterface_HPP_*/