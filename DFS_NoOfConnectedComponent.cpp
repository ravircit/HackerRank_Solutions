// DFS_NoOfConnectedComponent.cpp : countno of connected component
//

#include "stdafx.h"

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
void dfs(int,bool *, vector<vector<int>>adj);
int main()
{
	int e, v, c = 0;
	cin >> v >> e;
	bool *visited = new bool[v+1] {false};
	vector<vector<int>>adj(v+1,vector<int>(0));
	for (int i = 0; i < e; i++)
	{
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for (int i = 1; i <=v; i++)
	{
		if (visited[i] == false)
		{
			dfs(i,visited,adj);
			c++;
		}
	}
	cout << c;
	return 0;
}
void dfs(int node,bool *visited, vector<vector<int>>adj)
{
	stack<int>s;
	s.push(node);
	while (!s.empty())
	{
		int t = s.top();
		s.pop();
		*(visited+t) = true;
		for (int i = 0; i <adj[t].size() ; i++)
		{
			if (*(visited+adj[t][i]) == false)
			{
				s.push(adj[t][i]);
				*(visited + adj[t][i]) = true;
			}
		}
	}
}



//for (int i = 0; i < n; i++)
//{
//	cin >> s >> d;
//	t = A[0];
//	t.
//	if (t == NULL)
//	{
//		Node *nn = new Node();
//		nn->data = d;
//		nn->next = NULL;
//		A[s] = nn;
//	}
//	else
//	{
//		while (t != NULL)
//		{
//			st = t;
//			t = t->next;
//		}
//		Node *nn = new Node();
//		nn->data = d;
//		nn->next = NULL;
//		st->next = nn;
//	}
//	t = A[d];
//	if (t == NULL)
//	{
//		Node *nn2 = new Node();
//		nn2->data = s;
//		nn2->next = NULL;
//		A[d] = nn2;
//	}
//	else
//	{
//		while (t != NULL)
//		{
//			st = t;
//			t = t->next;
//		}
//		Node *nn2 = new Node();
//		nn2->data = s;
//		nn2->next = NULL;
//		st->next = nn2;
//	}
//}
//// printing adj list
//for (int i = 1; i <= n; i++)
//{
//	cout << "AL- " << i << "-->";
//	t = A[i];
//	while (t != NULL)
//	{
//		cout << t->data << " ";
//		t = t->next;
//	}
//	cout << "\n";
//}