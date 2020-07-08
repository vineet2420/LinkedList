#ifndef NODE_H
#define NODE_H

class Node{

public:

	typedef int DataType;

	Node();
	Node(DataType data, Node *next);
	~Node();
	
	//data
	DataType m_data;
	Node *m_next;




};


#endif //NODE_H
