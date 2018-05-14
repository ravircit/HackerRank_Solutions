#include "stdafx.h"

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
void dfs(int, bool *, vector<vector<int>>adj, int *,int*,int *);
int main()
{
	int e, v, c = 0;
	cin >> v >> e;
	int mult = 0;
	int sumAll = 0, sqSum = 0;
	bool *visited = new bool[v]{ false };
	vector<vector<int>>adj(v, vector<int>(0));
	vector<vector<int>>vt(v, vector<int>());
	for (int i = 0; i < e; i++)
	{
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for (int i = 0; i < v; i++)
	{
		if (visited[i] == false)
		{
			dfs(i, visited, adj,&sumAll,&sqSum,&c);
			c++;
		}
	}
	mult = ((sumAll*sumAll) - sqSum) / 2;
	cout << mult;
	return 0;
}
void dfs(int node, bool *visited, vector<vector<int>>adj, int *sumAll,int *sqSum,int *cnt)
{
	stack<int>s;
	s.push(node);
	//v[*cnt].push_back(node);
	int te = 1;
	while (!s.empty())
	{
		int t = s.top();
		s.pop();
		*(visited + t) = true;
		for (int i = 0; i <adj[t].size(); i++)
		{
			if (*(visited + adj[t][i]) == false)
			{
				s.push(adj[t][i]);
				*(visited + adj[t][i]) = true;
				//v[*cnt].push_back(adj[t][i]);
				te++;
			}
		}
	}
	*sumAll += te;
	*sqSum += te*te;
}
