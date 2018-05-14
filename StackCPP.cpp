// StackCPP.cpp : Defines the entry point for the console application.
//Stack by Array

#include "stdafx.h"
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void push(int a[],int );
void pop(int a[]);
void print(int a[]);
int top = -1;
int main()
{
	int a[20];
	push(a, 2);
	push(a, 1);
	push(a, 3);
	push(a, 6);
	print(a);
	pop(a);
	pop(a);
	pop(a);
	print(a);
	push(a, 11);
	print(a);
    return 0;
}
void push(int a[], int n)
{
	a[++top] = n;
}
void print(int a[])
{
	for (int i = 0; i <= top; i++)
	{
		cout << a[i]<<" ";
	}
	cout << "\n";
}
void pop(int a[])
{
	top--;
}