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
		Queue s;

		for (int i = 0; i < 100; ++i)
		{
			s.push(i);
		}

		//std::cout << list.toString();
		while (s.size()) {
			std::cout << s.pop() << ", ";
		}
		std::cout << "\n\n" << "destroyed " << Node::destroyed << '\n';
		std::cout << "\n\n" << "created " << Node::created << '\n';
	}
}