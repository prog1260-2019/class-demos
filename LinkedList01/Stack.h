#pragma once
#include "List.h"
class Stack
{
public:
	void push(int n);
	int pop();
	int size();

private:
	List list;
};

