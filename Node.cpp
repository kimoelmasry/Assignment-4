#include <iostream>
#include "Node.h"

using namespace std;

void Node::print(Node* h) {
	{
		while (h->next != NULL)
		{
			cout << h->data;
		}

	}

}


void Node::del(Node* h, Node* p)
{
	p->next = h->next;
	h = NULL;
}

int Node::Sum(Node* h)
{
	int sum = 0;
	while(h->next!=NULL)
	{ 
		sum += h->data;
	}
	return sum;
}
