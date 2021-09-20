#include <iostream>
#include "Example.h"

using namespace std;

int Example:: count=1;

Example::Example(int data) {
	now=count;
	thisdata=data;
	cout<<"Example #"<<now<<" is created"<<endl;
	++count;
}

void Example::getData() {
	// (4)
	cout<<"The data of Example #"<<now<<" is "<<thisdata<<endl;
}

Example::~Example() {
	cout<<"Example #"<<now<<" is destroyed"<<endl;
}