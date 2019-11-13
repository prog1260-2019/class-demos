#include "List.h"
#include <sstream>

List::List() : size_(0), head(nullptr)
{
}

List::~List()
{
	
}

void List::push_front(int n)
{
	Node* newNode = new Node();

	newNode->next = head;
	newNode->data = n;
	size_++;
	head = newNode;
}

int List::size()
{
	return size_;
}

std::string List::toString()
{
	std::stringstream ss;
	
	Node* current = head;

	while (current != nullptr)
	{
		ss << current->data << "----> ";
		current = current->next;
	}

	return ss.str();
}
