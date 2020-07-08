#include "List.h"
#include <iostream>

List::List(){

	headPtr = 0;

}

List::List(const List &other){

	headPtr=0; //absolutely need

	//cout<<"In constructor 1: "<<endl;
	Node *tempPtr = other.headPtr;
	//cout<<"In constructor 2: "<<endl;
	while(tempPtr!=0){
	
	//cout<<"In constructor 3: "<<endl;
	this->insert(tempPtr->m_data);
	//go to the next node in the list
	//cout<<"In constructor 4: "<<endl;
	tempPtr = tempPtr->m_next;
	//cout<<"In constructor 5: "<<endl;
	}

}

bool List::deleteByPos(int pos){

	int tempPos =0; //temporry position counter
	Node *predPtr = headPtr;
	Node *tempPtr = headPtr;

	while(tempPtr!=0){

	//in order to delete 1st line (really the last number entered)
	//2 cases: 1. delete headptr and if we delte any other value
		if(pos==tempPos){
			if(tempPtr==headPtr){
				headPtr=tempPtr->m_next;
			}
			else{
				predPtr->m_next=tempPtr->m_next;		
			}
						
	
		
			delete tempPtr;
			return true;
	}	
	
	predPtr = tempPtr;
	//go to the next node in the list
	tempPtr = tempPtr->m_next;
	tempPos++;
	}

	return false; //if we didnt find true, then what returns? garbage values, so we need to return false if true is not found	


}


void List::display(std::ostream &out){

	Node *tempPtr = headPtr;
	while(tempPtr!=0){

	//display data
	out<<tempPtr->m_data<<" ";
	
	//go to the next node in the list
	tempPtr = tempPtr->m_next;
	}
	out<<std::endl;

}


bool List::deleteByVal(Node::DataType data){

	Node *predPtr = headPtr;
	Node *tempPtr = headPtr;

	while(tempPtr!=0){

	//in order to delete 1st line (really the last number entered)
	//2 cases: 1. delete headptr and if we delte any other value
		if(data=tempPtr->m_data){
			if(tempPtr==headPtr){
				headPtr=tempPtr->m_next;
			}
			else{
				predPtr->m_next=tempPtr->m_next;		
			}
		}				
	
		if(data == tempPtr->m_data){
			predPtr->m_next = tempPtr->m_next;
			delete tempPtr;
			return true;
	}	
	
	predPtr = tempPtr;
	//go to the next node in the list
	tempPtr = tempPtr->m_next;
	}

	return false; //if we didnt find true, then what returns? garbage values, so we need to return false if true is not found	

}


bool List::empty(){
/*Long version:
	if (headPtr == 0)
		return true;
	else
		return false;
*/

//Short version:
	return headPtr == 0;


}

void List::insert(Node::DataType data){

	headPtr = new Node(data,headPtr);

}



List::~List(){

}
