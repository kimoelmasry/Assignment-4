#pragma once
#include <iostream>
using namespace std;


class Node
{
public:
	int data;
	Node* next;
	void print(Node* h);
	void del(Node* h, Node* p); // h being the node that will be deleted and p being the previous
	int Sum(Node* h);
		

	

};

