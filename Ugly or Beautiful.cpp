// Ugly or Beautiful.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int t;
	cin >> t;
	while (t--)
	{
		int n, f = 0, y = 0, c = 0;
		cin >> n;
		vector<int>v(n + 1, 0);
		for (int i = 0; i<n; i++)
		{
			int x;
			cin >> x;
			if (x>n)
			{
				f = 1;
			}
			else
			{

				if (v[x] == 1)
				{
					f = 1;
				}
				if (x>y)
					c++;
				y = x;
				v[x]++;
			}
		}
		if (f == 0 && c<n)
			cout << "Beautiful\n";
		else
			cout << "Ugly\n";

	}
	return 0;
}

