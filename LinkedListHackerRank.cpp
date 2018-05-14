// LinkedListHackerRank.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Insert( int data);
void Print();
struct Node
{
	int data;
	struct Node *next;
};
Node *head=NULL;
void ReversePrint(Node *);
int main()
{
	//head = NULL;
	Insert(5);
	Insert(6);
	Insert(7);
	Insert(8);
	Insert(9);
	ReversePrint(head);
    return 0;
}


void Insert( int data)
{
	// Complete this method
	Node *t = new Node();
	Node *s = new Node();
	s = head;
	t->data = data;
	if (head != NULL)
	{
		while (s->next != NULL)
			s = s->next;
		s->next = t;
	}
	else
		head = t;
}
void Print()
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
void ReversePrint(Node *head)
{
	// This is a "method-only" submission. 
	// You only need to complete this method. 
	vector<int>v(10,0);
	int i = 0;
	Node *t = new Node();
	t = head;
	while (t != NULL)
	{
		v[i] = t->data;
		t = t->next;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
		cout << v[j] << "\n";
}

