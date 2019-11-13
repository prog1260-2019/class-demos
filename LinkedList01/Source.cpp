//
//
// D Burchill 2019
//

#include <iostream>
#include"List.h"

int main()
{
	List list;

	for (int  i=0; i<100; ++i)
	{
		list.push_front(i);
	}

	std::cout << list.toString();
	
}