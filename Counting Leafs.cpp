// Counting Leafs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int main()
{
	int n,c=0;
	cin >> n;
	vector<int>v(0, 0);
	vector<bool>a(n, true);
	int total_leaf = n;
	int total_removed = 0;
	vector<pair<int, vector<int>>>adj(n, make_pair(-2, v));//first = -2;//all hving no child
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		adj[i].first = x;
		if (x != -1)
		{
			adj[x].second.push_back(i);
			if (a[x])
			{
				a[x] = false;
				total_leaf--;
			}
		}
	}
	int d;
	cin >> d;
	if (adj[d].first == -1)
	{
		c = 0;
	}
	else
	{
		if (adj[d].second.size() > 0)
		{
			stack<int>s;
			for (int i = 0; i < adj[d].second.size(); i++)
			{
				s.push(adj[d].second[i]);
				while (!s.empty())
				{
					int t = s.top();
					s.pop();
					//total_removed++;
					if (adj[t].second.size()>0)
					{
						for (int j = 0; j < adj[t].second.size(); j++)
						{
							s.push(adj[t].second[j]);
						}
						//adj[t].first = -2;
					}
					else
					{
						total_leaf--;
					}
				}
			}
			c = total_leaf;
		}
		else
		{
			c = total_leaf-1;
		}
	}
	cout << c;
    return 0;
}

