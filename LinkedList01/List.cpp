#include "List.h"
#include <sstream>
#include <iostream>

List::List() : size_(0), head(nullptr)
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
	Node* newNode = new Node();

	newNode->next = head;
	newNode->data = n;
	size_++;
	head = newNode;
}

void List::push_back(int n)
{
	Node* newNode = new Node();
	newNode->data = n;
	newNode->next = nullptr;

	if (head == nullptr) {
		head = newNode;
	}
	else {
		Node* current = head;
		while (current->next) {
			current = current->next;
		}
		current->next = newNode;
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
	if (head == nullptr) {
		return 0;
	}
	int tmp = head->data;

	Node* deleteMe = head;
	head = head->next;
	delete deleteMe;

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
