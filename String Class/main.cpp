#include <iostream>
#include "String.h"

int main()
{
	String s1("test");
	
	s1.Print();
	s1.SetLength(10);

	std::cout << s1.GetLength() << std::endl;
	// std::cout << s1.GetLength() << std::endl;

	// std::cout << s1 << std::endl;
}