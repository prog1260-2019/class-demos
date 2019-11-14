//
//
// D Burchill 2019
//

#include <iostream>
#include"List.h"

int main()
{
	{
		List list;

		for (int i = 0; i < 100; ++i)
		{
			list.push_front(i);
		}

		//std::cout << list.toString();
		list.display();

		std::cout << "\n\n" << "created " << Node::created << '\n';
		std::cout << "size: " << list.size() << " deleted " << Node::destroyed << '\n';


		std::cout << "front is: " <<  list.pop_front() << '\n';
		std::cout << "size: " << list.size() <<  " deleted " << Node::destroyed << '\n';

		std::cout << "front is: " << list.pop_front() << '\n';
		std::cout << "size: " << list.size() << " deleted " << Node::destroyed << '\n';

		std::cout << "front is: " << list.pop_front() << '\n';
		std::cout << "size: " << list.size() << " deleted " << Node::destroyed << '\n';

		std::cout << "front is: " << list.pop_front() << '\n';
		std::cout << "size: " << list.size() << " deleted " << Node::destroyed << '\n';
	}
	
	std::cout << "deleted " << Node::destroyed << '\n';
}