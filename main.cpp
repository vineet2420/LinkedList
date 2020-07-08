#include <iostream>
#include "Node.h"
#include "List.h"
using namespace std;

int main(){

	//Node n(100,0);
	List l;
	if(l.empty()){
	cout<<"list is empty"<<endl;
	}
	else{
	cout<<"list is not empty"<<endl;
	}

	const int n = 10;

	for(int i =0; i<n; i++){
	l.insert(i+1);
	
	}
	l.display(cout);
/*
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);
	l.insert(5);
*/



	l.deleteByPos(20);
	l.display(cout);

/*
	for(int i =0; i<n; i++){
	l.deleteByVal(i+1);
	}
*/
	//l.display(cout);
	//l.deleteByVal(5);
	//l.display(cout);

	List l2(l);
	cout<<"L2 is: "<<endl;
	l2.display(cout);

	return 0;

}
