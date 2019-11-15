//
//
// D Burchill 2019
//

#include <iostream>
#include "Stack.h"
#include "Queue.h"

int main()
{
	{
		List s;

		for (int i = 0; i < 10; ++i)
		{
			s.push_back(i);
		}

		std::cout << s.toString();
		
		void* n = s.getFirst();
		s.insertBefore(42, n);

		n = s.getNext(n);
		n = s.getNext(n);

		std::cout << "\n\nData: " << s.getDataAt(n) << "\n";
		 
		s.insertBefore(73, n);

		std::cout << s.toString() << '\n';
		
	}

	std::cout << "\n\n" << "destroyed " << Node::destroyed << '\n';
	std::cout << "\n\n" << "created " << Node::created << '\n';
}