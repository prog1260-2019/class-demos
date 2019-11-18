#include "Stack.h"

void Stack::push(int n)
{
	list.push_front(n);
}

int Stack::pop()
{
	if (list.size() == 0)
	{
		//error 
		return 0;
	}
	return list.pop_front();
}

int Stack::size()
{
	return list.size();
}
