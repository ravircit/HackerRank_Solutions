// Maximum Index.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int>v(n, 0);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
	}
    return 0;
}

