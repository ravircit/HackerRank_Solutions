// Coin Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include <vector>
#include <algorithm>

#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, count = 0;
		cin >> n;
		vector<int>v(n, 0);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (v[i] % 2 == 0)
				while (v[i] > 1)
				{
					if (v[i] % 2 == 0)
					{
						v[i] = v[i] / 2;
						count++;
					}
					if (v[i] % 2 == 1)
						break;
				}
		}
		if (count % 2 == 0)
			cout << "Alan\n";
		else
			cout << "Charlie\n";
	}	cout << "Charlie\n";
    return 0;
}