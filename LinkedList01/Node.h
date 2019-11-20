//
#pragma once


struct Node
{
	Node();
	Node(int data, Node* prev = nullptr, Node* next = nullptr);
	~Node();

	int data;
	Node* next;
	Node* prev;

	static int created;
	static int destroyed;
};
