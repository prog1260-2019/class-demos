#include "Node.h"

int Node::created = 0;
int Node::destroyed = 0;

Node::Node()
{
	Node::created++;
}

Node::Node(int data, Node* prev, Node* next) : data(data), prev(prev), next(next)
{
	Node::created++;
}

Node::~Node()
{
	Node::destroyed++;
}
