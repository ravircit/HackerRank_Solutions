// Gridland Metro.cpp : Defines the entry point for the console application.
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
	long n, m, k,i=1,train=0,t;
	cin >> n >> m >> k;
	t = k;
	vector<vector<long>>a_v(k+1,vector<long>(4,0));
	vector<vector<long>>v(n+1);
	while (t--)
	{
		long x, y, z;
		cin >> x >> y >> z;
		a_v[i][1] = x;
		a_v[i][2] = y;
		a_v[i][3] = z;
		v[x].push_back(i);
		i++;
	}
	for (long i = 1; i <=k; i++)
	{
		//for (long j = 1; j <4; j++)
		{
			if (v[a_v[i][1]].size() > 1)
			{

			}
			else
			{
				train += a_v[i][3] - a_v[i][2] + 1;
			}
		}
	}
	cout << (n*m)-train;
    return 0;
}

