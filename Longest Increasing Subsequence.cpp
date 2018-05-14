// Longest Increasing Subsequence.cpp : Defines the entry point for the console application.
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
		vector<int>v(n, 1);
		vector<int>a(n,0);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (a[i] > a[j] && v[i]<v[j] + 1)
				{
					v[i] = v[j] + 1;
				}
			}
		}
		cout << *max_element(v.begin(), v.end())<<"\n";
	}
    return 0;
}

