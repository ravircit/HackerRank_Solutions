// BFS_By_Struct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Insert(struct Node *, int data);
void Print(Node*);
struct Node
{
	int data;
	struct Node *next;
};

struct Node *A[5]{ NULL };
//int *A[5];
int main()
{
	int s, d, n;
	cin >> n;
	struct Node *t;
	struct Node *st=NULL;
	for (int i = 0; i < n; i++)
	{
		cin >> s >> d;
		t = A[s];
		if (t == NULL)
		{
			Node *nn = new Node();
			nn->data = d;
			nn->next = NULL;
			A[s] = nn;
		}
		else
		{
			while (t!= NULL)
			{
				st = t;
				t = t->next;
			}
			Node *nn = new Node();
			nn->data = d;
			nn->next = NULL;
			st->next = nn;
		}
		t = A[d];
		if (t == NULL)
		{
			Node *nn2 = new Node();
			nn2->data = s;
			nn2->next = NULL;
			A[d] = nn2;
		}
		else
		{
			while (t != NULL)
			{
				st = t;
				t = t->next;
			}
			Node *nn2 = new Node();
			nn2->data = s;
			nn2->next = NULL;
			st->next = nn2;
		}
	}
	// printing adj list
	for (int i = 1; i <= n; i++)
	{
		cout << "AL- " << i<<"-->";
		t = A[i];
		while (t!=NULL)
		{
			cout << t->data << " ";
			t = t->next;
		}
		cout << "\n";
	}
	return 0;
}