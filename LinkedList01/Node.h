//
#pragma once


struct Node
{
	Node();
	Node(int n, Node* prev, Node* next);
	~Node();

	int data;
	Node* next;
	Node* prev;

	static int created;
	static int destroyed;
};