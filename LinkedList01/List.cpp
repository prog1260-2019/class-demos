#include "List.h"
#include <sstream>
#include <iostream>
#include <stdexcept>

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
	Node* newNode = new Node(n, nullptr, nullptr);

	if (head == nullptr) {
		head = newNode;
		tail = newNode;
	}
	else {
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
	 
	size_++;
	 
}

void List::push_back(int n)
{
	Node* newNode = new Node(n, nullptr, nullptr);
	 

	if (head == 0) {
		head = newNode;
		tail = newNode;
	} else {
		tail->next = newNode;
		newNode->prev = tail;
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
	if (size_ == 0) {
		throw std::out_of_range("Tried to pop empty list");
	}

	int tmp = head->data;
	Node* cur = head;

	if (size_ == 1) {
		tail = nullptr;
		head = nullptr;
	}
	else {
		head = head->next;
		head->prev = nullptr;
	}

	delete cur;
	size_--;
	return tmp;
}

Node* List::getFirst()
{
	return head;
}

Node* List::getLast()
{
	return tail;
}

Node* List::getNext(Node* cur)
{
	if (cur)
		return cur->next;
	else
		throw std::invalid_argument("getNext nullptr exception");
}

Node* List::getPrev(Node* cur)
{
	if (cur)
		return cur->prev;
	else
		throw std::invalid_argument("getPrev nullptr exception");
}

int List::getDataAtNode(Node* cur)
{
	if (cur)
		return cur->data;
	else
		throw std::invalid_argument("getDataAt nullptr exception");
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
