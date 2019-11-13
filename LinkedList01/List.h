#pragma once
#include "Node.h"
#include <string>

class List
{
public:
	List();
	~List();
	
	void push_front(int n);
	int size();
	std::string toString();

private:
	Node* head;
	int size_;
};

