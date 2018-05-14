// Longest Subarray Palindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<vector>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	int n, t, i, j = 0, c = 0, k = 0, max = 0;
	cin >> n;
	vector<int>v(n, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	t = n / 2;
	for (i = t-1; i > 0; i--)
	{
		for ( j = i; j > 0; j--)
		{
			if (v[j] == v[t + k])
			{
				c++;
				k++;
			}
			else
			{
				k = 0;
				if (c > max)
					max = c;

				c = 0;
				break;
			}
		}
	}
    return 0;
}

