// Adjacency list.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream >
#include < vector >
#include<queue>
using namespace std;
vector <int> v[100001];   //Vector for maintaining adjacency list explained above
int level[100001]; //To determine the level of each node
bool vis[100001];
void bfs(int s);
int main()
{
	int n, e,k,c=0;
	cin >> n;
	e = n - 1;
	for (int i = 0; i < e; i++)
	{
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
	}
	cin >> k;
	bfs(0);
	for (int i = 0; i < 100001; i++)
	{
		if (level[i] == k)
			c++;
	}
	cout << c;
	return 0;
}

void bfs(int s)
{
	queue<int>q;
	int p;
	level[s] = 0;
	vis[s] = true;
	q.push(s);
	while (!q.empty())
	{
		p = q.front();
		q.pop();
		for (int i = 0; i < v[p].size(); i++)
		{
			if (vis[v[p][i]] == false)
			{
				q.push(v[p][i]);
				level[v[p][i]] = level[p] + 1;
				vis[v[p][i]] = true;
			}
		}
	}
}