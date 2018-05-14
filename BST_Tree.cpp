// BST_Tree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//void Insert(BstNode* root,int data);
//BstNode* NewNode(int n);
//void print();
//BstNode *root = NULL;
//struct BstNode
//{
//	int data;
//	BstNode *left;
//	BstNode *right;
//};
//BstNode* NewNode(int n)
//{
//	BstNode * t = new BstNode();
//	t->data = n;
//	t->left = NULL;
//	t->right = NULL;
//	return t;
//}
//int main()
//{
//	Insert(root, 15);
//	Insert(root, 10);
//	Insert(root, 20);
//    return 0;
//}
//BstNode* Insert(BstNode* root, int data)
//{
//	if (root == NULL)
//		root = NewNode(data);
//	else if (data <= root->data)
//		root->left = Insert(root->left, data);
//}
//void print()
//{
//
//}
// Binary Search Tree - Implemenation in C++
// Simple program to 
//Definition of Node for Binary search tree
struct BstNode {
	int data;
	BstNode* left;
	BstNode* right;
};

// Function to create a new Node in heap
BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

// To insert data in BST, returns address of root node 
BstNode* Insert(BstNode* root, int data) {
	if (root == NULL) { // empty tree
		root = GetNewNode(data);
	}
	// if data to be inserted is lesser, insert in left subtree. 
	else if (data <= root->data) {
		root->left = Insert(root->left, data);
	}
	// else, insert in right subtree. 
	else {
		root->right = Insert(root->right, data);
	}
	return root;
}
//To search an element in BST, returns true if element is found
bool Search(BstNode* root, int data) {
	if (root == NULL) {
		return false;
	}
	else if (root->data == data) {
		return true;
	}
	else if (data <= root->data) {
		return Search(root->left, data);
	}
	else {
		return Search(root->right, data);
	}
}
int main() {
	BstNode* root = NULL;  // Creating an empty tree
						   /*Code to test the logic*/
	root = Insert(root, 15);
	root = Insert(root, 10);
	root = Insert(root, 20);
	root = Insert(root, 25);
	root = Insert(root, 8);
	root = Insert(root, 12);
	// Ask user to enter a number.  
	int number;
	cout << "Enter number be searched\n";
	cin >> number;
	//If number is found, print "FOUND"
	if (Search(root, number) == true) cout << "Found\n";
	else cout << "Not Found\n";
}