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

	Node* getFirst();
	Node* getLast();
	Node* getNext(Node*);
	Node* getPrev(Node*);
	int   getDataAtNode(Node*);

	void  insertBefore(int, Node*);
	void  deleteNode(Node*);

	int size();
	std::string toString();
	void display(); 

private:
	void displayHelper(Node* n);

	Node* head;
	Node* tail;
	int size_;
};

