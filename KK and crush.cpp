// KK and crush.cpp : Defines the entry point for the console application.
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
		int n;
		cin >> n;
		vector<vector<int>>v(100001,vector<int>(2,0));
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			if (x < 0)
				v[-x][1] =x;
			else
				v[x][0] = x;
		}
		int q;
		cin >> q;
		while (q--)
		{
			int w;
			cin >> w;
			if (w < 0)
			{
				if (v[-w][1] == w)
					cout << "Yes\n";
				else
					cout << "No\n";
			}
			else
			{
				if(v[w][0] == w)
					cout << "Yes\n";
				else
					cout << "No\n";
			}

		}
	}
    return 0;
}

