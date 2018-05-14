// Hackerland Radio Transmitters.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n, r,d=0,count=0;
	cin >> n >> r;
	vector<int>vt(100001, 0);
	vector<int>v(n, 0);
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v[i] = x;
		vt[x] = 1;
	}
	sort(v.begin(), v.end());
	d = v[0];
	for (int i = 0; i < n;)
	{
		d = d + r;
		if (vt[d] == 1)
		{
			d = d + r + 1;
			count++;
		}
		else
		{
			d = d - 1;
			while (1)
			{
				if (vt[d] == 1)
				{
					//i = i + r + 1;
					d = d + r + 1;
					count++;
					break;
				}
				else
					d--;
			}
		}
		while (true)
		{
			if (vt[d] == 1)
			{
				break;
			}
			else
			{
				d++;
			}
		}
	}
    return 0;
}

