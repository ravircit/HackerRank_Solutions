// Adjacency list.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream >
#include < vector >

using namespace std;

int main()
{
	int n, e;
	cin >> n>>e;
	vector<int>adj[10];
	for (int i = 0; i < e; i++)
	{
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
	for (int i = 1; i <= n; i++)
	{
		cout << "Adjacency list of node " << i << ": ";

		for (int j = 0; j < adj[i].size(); j++)
		{
			if (j == adj[i].size() - 1)
				cout << adj[i][j] << endl;
			else
				cout << adj[i][j] << " --> ";
		}
		//cout << "\n";
	}
    return 0;
}

