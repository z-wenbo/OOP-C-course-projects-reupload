#include <iostream>
#include "Example.h"

using namespace std;

void create_example(int n) {
	
	cout << "--------create_example is ready--------\n";
	
	Example* e[10];
	
	for (int i = 0; i < n; i++)
		e[i] = new Example(i);
			
	// (6)
	static Example c(2333);
	e[0]->getData();
	e[1]->getData();
	e[2]->getData();
	e[0]->~Example();
	e[1]->~Example();
	e[2]->~Example();
	c.getData();
	cout << "--------create_example is over--------\n";
}

// (7)
Example a(23);

int main() {

	cout << "--------main_function is ready--------\n";

	// (8)
	Example b(233);
		
	create_example(3);
	
	// (9)
	Example d(23333);
	a.getData();
	b.getData();
	d.getData();

	cout << "--------main_function is over---------\n";

	return 0;
}
