// StackLL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void StackInsert(int data);
void Print(struct Node*);
struct Node
{
	int data;
	struct Node *next;
};
void ReversePrint(Node *);
struct Node *last = NULL;
Node *head = NULL;
int main()
{
	//head = NULL;

	StackInsert(5);
	StackInsert(6);
	Print(head);
	StackInsert(7);
	StackInsert(8);
	StackInsert(9);
	Print(head);
	Print(head);
	//ReversePrint(head);
	return 0;
}


void StackInsert(int data)
{
	// Complete this method
	Node *t = new Node();
	t->data = data;
	t->next = head;
	head = t;
	
}
void Print(Node *head)
{
	// This is a "method-only" submission. 
	// You only need to complete this method. 
	struct Node *t;
	t = head;
	while (t != NULL)
	{
		cout << t->data << " ";
		t = t->next;
	}
}

