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
		List l;

		for (int i = 0; i < 100; ++i)
		{
			l.push_front(i);
		}

		Node* cur = l.getLast();
		while (cur) {
			std::cout << l.getDataAtNode(cur) << ", ";
			cur = l.getPrev(cur);
		}

		std::cout << "\n\n" << "destroyed " << Node::destroyed << '\n';
		std::cout << "\n\n" << "created " << Node::created << '\n';
	}
	std::cout << "\n\n" << "destroyed " << Node::destroyed << '\n';

}