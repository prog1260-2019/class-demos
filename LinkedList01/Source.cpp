//
//
// D Burchill 2019
//

#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "List.h"

int main()
{
	{
		List list;

		for (int i = 0; i < 10; ++i)
		{
			list.push_back(i);
		}

		std::cout << list.toString();
		
		void* n = list.getFirst();
		list.insertBefore(42, n);

		n = list.getNext(n);
		n = list.getNext(n);
		n = list.getNext(n);

		void* tmp = list.getNext(n);
		list.deleteAt(n);
		n = tmp;
		std::cout << "\n\nData: " << list.getDataAt(n) << "\n";
		 
		list.insertBefore(73, n);

		std::cout << list.toString() << '\n';
		
	}

	std::cout << "\n\n" << "destroyed " << Node::destroyed << '\n';
	std::cout << "\n\n" << "created " << Node::created << '\n';
}
