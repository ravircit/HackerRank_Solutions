// Geeks Sum.cpp : Defines the entry point for the console application.
//https://practice.geeksforgeeks.org/contest-problem/geeks-sum

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
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		vector<int>v(n + 1, 1);
		vector<int>vf;
		v[0] = 0;
		v[1] = 0;
		for (int j = 2; j <= n; j++)
		{
			if (v[j] != 0)
			{
				for (int k = j*j; k <= n; k = k + j)
				{
					v[k] = 0;
				}
			}
		}
		int s = 0, a = 0, b = 1, c = 2, gs = 0;
		cout << a << " " << b << " ";
		for (int j = 0; j < n - 2; j++)
		{
			if (v[c] == 1)
			{
				gs += c;
			}
			s = a + b;
			a = b;
			b = s;
			vf.push_back(s);
			cout << s << " ";
		}
		cout << "\n" << gs;
	}
	return 0;
}

