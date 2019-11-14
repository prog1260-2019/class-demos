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
		std::cout << "\n\nFirst: " << s.getData(n) << "\n";
		std::cout << "Next: " << s.getData(s.getNext(n)) << "\n";
		
	}

	std::cout << "\n\n" << "destroyed " << Node::destroyed << '\n';
	std::cout << "\n\n" << "created " << Node::created << '\n';
}