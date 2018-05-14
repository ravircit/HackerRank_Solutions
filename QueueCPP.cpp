// QueueCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Enqueue(int data);
void Dqueue();
void print();
struct Node
{
	int data;
	struct Node *next;
};
Node *front = NULL;
Node *rear = NULL;

int main()
{
	Enqueue(2);
	Enqueue(5);
	Enqueue(3);
	Enqueue(7);
	print();
	Enqueue(9);
	print();
	Dqueue();
	print();
	Enqueue(8);
	print();
    return 0;
}
void Enqueue(int n)
{
	Node *t = new Node();
	t->data = n;
	if (front == NULL && rear == NULL)
	{
		front = t;
		rear = t;
	}
	else
	{
		rear->next = t;
		rear = t;
	}
}
void Dqueue()
{
	Node *t = new Node();
	t = front;
	if (front == NULL)
		return;
	if (front == rear)
		front = rear = NULL;
	else
	front = front->next;
	free(t);
}
void print()
{
	Node *t = new Node();
	t = front;
	while (t != NULL)
	{
		cout << t->data << " ";
		t = t->next;
	}
	cout << "\n";
}
