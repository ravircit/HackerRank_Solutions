// Bricks and Building.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include <vector>
#include <algorithm>

#include <string>
using namespace std;
int main()
{
	int n, count = 0, q;
	cin >> n;
	vector<int>v(n, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	cin >> q;
	while (q--)
	{
		int x;
		count = 0;
		for (int i = 0; i<n; i++)
		{
			if (v[i] % x == 0)
				count++;
		}
		cout << count << "\n";
	}
	return 0;
}

