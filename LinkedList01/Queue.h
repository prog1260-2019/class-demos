//
//
//
#pragma once

#include "List.h"

class Queue {
public:
	void push(int n);
	int pop();
	int size();

private:
	List list;
};