#include "Node.h"



Node::Node(){
	m_next = 0;
	m_data = 0;
}


Node::Node(DataType data, Node *next){
	/*
	//instead of making new m_data = data... this->data is same
	this-> data;	//like self in python, setting the object data
	this-> next;*/

	m_data= data;	
	m_next= next;

}


Node::~Node(){

	

}
