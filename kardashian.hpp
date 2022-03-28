#ifndef kardashian_HPP_
#define kardashian_HPP_

#include <stdlib.h>
#include <iostream>
using namespace std;

class kardashian {
	friend class kardashian_node;
	friend class treeInterface;
	friend class kardashian_tree;
	string fName;
	string lName;
	int age;
	string birthLocation;
public:
	kardashian();
	kardashian(string fName, string lName, int age, string birthLocation);
};



#endif /* kardashian_HPP_ */