#ifndef LIST_H
#define LIST_H
#include <iostream>
#include "Node.h"

class List{

public:

	List();
	List(const List &other);//to copy lists as parameters correctly
	bool empty();
	void insert(Node::DataType data);
	void display(std::ostream &out);
	bool deleteByVal(Node::DataType data);
	~List();
	bool deleteByPos(int pos);

private:

	//data
	Node *headPtr;

};



#endif //LIST_H
