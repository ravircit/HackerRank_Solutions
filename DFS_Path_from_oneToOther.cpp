// DFS_NoOfConnectedComponent.cpp : countno of connected component
//

#include "stdafx.h"

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<set>
using namespace std;
void path(vector<int>&ba, set<int>dp,int from,int to,int *answ);
int main()
{
	int v, q, from, to;
	cin >> v >> q;
	int ans = 0;
	vector<vector<int>>adj(v + 1, vector<int>(0));
	vector<vector<bool>>visited(v + 1, vector<bool>(v + 1, false));
	vector<vector<set<int>>>dp(v + 1, vector<set<int>>(v + 1, set<int>()));
	for (int i = 1; i <= v; i++)
	{
		visited[i][i] = true;
	}
	vector<int>a(v + 1, 0);
	for (int i = 0; i < v - 1; i++)
	{
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int c = 0, x = 0;
	stack<int>s;
	for (int i = 0; i < q; i++)
	{
		cin >> from >> to;
		if (from != to)
		{
			//if (dp[from][to].size() == 0)
			{
				for (int j = 0; j < adj[from].size(); j++)
				{
					c = adj[from][j];

					dp[from][c].insert(from);
					dp[c][from].insert(from);
					s.push(c);
					visited[from][c] = true;
					visited[c][from] = true;
					while (!s.empty())
					{
						c = s.top();
						s.pop();
						dp[from][c].insert(c);
						dp[c][from].insert(c);
						visited[from][c] = true;
						visited[c][from] = true;
						if (adj[c].size() > 0)
						{
							for (int k = 0; k < adj[c].size(); k++)
							{
								x = adj[c][k];
								if (visited[from][x] == false)
								{
									dp[from][x] = dp[from][c];
									dp[x][from] = dp[c][from];
									dp[from][x].insert(x);
									dp[x][from].insert(x);
									s.push(x);
									visited[from][x] = true;
									visited[x][from] = true;
								}
							}
						}
					}

				}
			}
			//else
			{
				//path(a, dp[from][to], from, to, &ans);
			}
		}
		else
		{
			a[from]++;
		}
		path(a, dp[from][to], from, to, &ans);
	}

	cout << ans;
	return 0;
}

void path(vector<int>&a, set<int>dp, int from, int to,int *ans)
{
	set<int>::iterator it;
	if (from != to)
	{
		for (it=dp.begin();it!=dp.end();it++)
		{
			a[*it]++;
			if (a[*it] > *ans)
				*ans = a[*it];
		}
	}
	else
	{
		a[from]++;
		if (*ans < a[from])
			*ans = a[from];
	}
}