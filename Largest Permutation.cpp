// Largest Permutation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,s,index,j=1;
	cin >> n >> s;
	vector<int>v(n+1, 0);
	vector<int>vt(n + 1, 0);
	vector<int>t(n+1, 0);
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		vt[i] = x;
		v[x] = i;
	}
	index = n;
	while (s--)
	{
		for (int i = index; i >0; i--)
		{
			if (j < v[i]) 
			{
				t[j] = i;
				t[v[i]] = vt[j];
				j++;
				index--;
				break;
			}
		}
	}
	for (int i = 1; i <=n; i++)
	{
		if (t[i] == 0)
			t[i] = vt[i];
	}
	for (int i = 1; i <= n; i++)
		cout << t[i] << " ";
    return 0;
}

