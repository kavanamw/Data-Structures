#include "stdafx.h"
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

template<typename X>
struct Node
{
	X data;
	Node *next;
};

template<class Y>
class OrderedList
{
public:
	void AddItem(Node<Y>)
	{
		Node<Y>* new_node; 
		*new_node->data = new_data;
		*new_node->next = (*head_ref);
		(*head_ref) = new_node;
	}
	void printList(Node<Y> *node)
	{
		while (node != NULL)
		{
			printf(" %d ", node->data);
			node = node->next;
		}
	}
};

int main()
{
	OrderedList<int> L5T1;
	Node<int>* head = NULL;
	L5T1.AddItem(7);
	L5T1.AddItem(1);
	L5T1.AddItem(4);
	L5T1.printList(head);
	cin.get();
	return 0;
}
