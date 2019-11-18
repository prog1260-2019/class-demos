#include "Queue.h"

void Queue::push(int n)
{
	list.push_back(n);
}

int Queue::pop()
{
	if (list.size() == 0)
		return 0;
	else
		return list.pop_front();
}

int Queue::size()
{
	return list.size();
}
