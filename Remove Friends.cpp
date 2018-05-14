// Remove Friends.cpp : Defines the entry point for the console application.
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
		int n, k, f = 0;
		cin >> n >> k;
		vector<int>v(n, 0);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		while (k--)
		{
			int i;
			for (i = 0; i < v.size()-1; i++)
			{
				if ( v[i] < v[i + 1])
				{
					v.erase(v.begin() + i);
					f = 1;
					break;
				}
			}
			if (f == 0)
			{
				v.erase(v.begin() + i);
			}
		}
		for (int i = 0; i < v.size(); i++)
		{
			if(v[i]!=-1)
			cout << v[i] << " ";
		}
		cout << "\n";
	}
    return 0;
}

