//
//
// D Burchill 2019
//

#include <iostream>
#include"List.h"
#include "Queue.h"

int main()
{
	{
		Queue q;

		for (int i = 0; i < 100; ++i)
		{
			q.push(i);
		}

		//std::cout << list.toString();
		while (q.size() > 0) {
			std::cout << q.pop() << ", ";
		}

	}
	std::cout << "\n\n" << "created " << Node::created << '\n';
	std::cout << "deleted " << Node::destroyed << '\n';
}