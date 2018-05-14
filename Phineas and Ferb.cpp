// Phineas and Ferb.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<vector>
using namespace std;

int main()
{
	long int n;
	cin >> n;
	vector<long int>v(n, 0);
	for (int i = 0; i<n; i++)
	{
		cin >> v[i];
	}
	long int q, l, m, d, k, turn = 0;
	cin >> q;
	while (q--)
	{
		cin >> l >> m;
		d = m - l;
		k = l - 1;
		turn = 0;
		for (int i = 0; i <= d; i++)
		{
			//if(v[k]!=0)
			{
				//v[k]=0;
				turn++;
			}
			k++;
		}
		if (turn % 2 == 1)
			cout << "Phineas\n";
		else
			cout << "Ferb\n";
	}
	return 0;
}


