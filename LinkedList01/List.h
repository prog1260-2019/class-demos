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
	int pop_back();

	
	void* getFirst();
	void* getLast();
	void* getNext(void*);
	void* getPrev(void*);

	int getDataAt(void*);
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

