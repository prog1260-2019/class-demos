#include "List.h"
#include <sstream>
#include <iostream>

List::List() : size_(0), head(nullptr), tail(nullptr)
{
}

List::~List()
{
	Node* current = head;

	while (current != nullptr) {
		Node* tmp = current->next;
		delete current;
		current = tmp;
	}
}

void List::push_front(int n)
{
	Node* newNode = new Node(n, nullptr, head);
    
	if (head == nullptr) {
		head = newNode;
		tail = newNode;
	}
	else {
		head->prev = newNode;
		head = newNode;
	}
	size_++;
}

void List::push_back(int n)
{
	Node* newNode = new Node(n, tail, nullptr);

	if (head == nullptr) {
		head = newNode;
		tail = newNode;
	}
	else {
		tail->next = newNode;
		tail = newNode;
	}
	size_++;
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

int List::pop_front()
{
	if (head == nullptr) {  // no Nodes on list
		throw std::out_of_range{ "attempt to pop empty list" };
	}

	int tmp = head->data;
	Node* cur = head;


	if (tail == head) {  // only one Node on list
		tail = nullptr;
		head = nullptr;
	}
	else {
		head = cur->next; 
		head->prev = nullptr;
	}
	delete cur;
	size_--;
	return tmp;
}


void List::display()
{
	displayHelper(head);
}

void List::displayHelper(Node* n)
{
	if (n == nullptr)
		return;

	std::cout << n->data << " ---> ";
	displayHelper(n->next);
}
