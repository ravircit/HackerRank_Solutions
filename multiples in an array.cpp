// multiples in an array.cpp : Defines the entry point for the console application.
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
		int n, q;
		cin >> n >> q;
		vector<int>a(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			//a.push_back(x);
		}
		int m = *max_element(a.begin(), a.end());
		vector<int>v(m + 1, 0);
		vector<int>ans(m + 1, 0);
		for (int i = 0; i < n; i++)
		{
			v[a[i]]++;
		}
		for (int i = 1; i <= m; i++)
		{
			for (int j = i; j <= m; j = j + i)
			{
				if (v[j] >= 1)
					ans[i]++;
			}
		}
		while (q--)
		{
			int z;
			cin >> z;
			cout << ans[z] << " ";
		}
		cout << "\n";
	}
	return 0;
}

