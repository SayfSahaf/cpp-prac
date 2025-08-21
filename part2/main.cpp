#include <iostream>
#include "intarray.h"

void printPointer(int & a)
{
	std::cout << &a << " " << a << " " << sizeof(a) << "\n";
}

int main()
{
	/*
	int a = 88;
	int b = 55;

	int * pa = &a;
	int * pb = &b;

	printPointer(a);
	printPointer(b);
	*(pb+1) = 20;
	printPointer(a);

	*/
	/*
	IntArray a1(4);
	a1.set(0, 55);
	std::cout << a1.get(0) << std::endl;
	std::cout << a1.getSize() << std::endl;
	return 0;
	*/
}
