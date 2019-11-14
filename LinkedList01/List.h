#pragma once
#include "Node.h"
#include <string>

class List
{
public:
	List();
	~List();
	
	void push_front(int n);
	void push_back(int n);
	int pop_front();
	
	void* getFirst();
	void* getLast();
	void* getNext(void*);
	void* getPrev(void*);

	int getData(void*);
	void deleteAt(void*);
	void insertBefore(int, void*);

	int size();
	std::string toString();
	void display(); 

private:
	void displayHelper(Node* n);

	Node* head;
	Node* tail;

	Node* current;

	int size_;
};

