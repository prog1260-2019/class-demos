//
#pragma once


struct Node
{
	Node();
	~Node();

	int data;
	Node* next;

	static int created;
	static int destroyed;
};