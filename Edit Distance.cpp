// Edit Distance.cpp : Defines the entry point for the console application.
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
		int n, m,mini=0;
		cin >> n >> m;
		string s1, s2;
		cin >> s1 >> s2;
		//int a[n + 1][m + 1];
		int a[6][5];
		for (int i = 0; i <=n; i++)
		{
			a[0][i] = i;
		}
		for (int i = 0; i <=m; i++)
		{
			a[i][0] = i;
		}
		for (int r = 1; r <=m; r++)
		{
			for (int c = 1; c <=n; c++)
			{
				if (s1[c] == s2[r])
				{
					mini = min(a[r - 1][c], a[r][c - 1]);
					mini = min(mini, a[r - 1][c - 1]);
					a[r][c] = mini;
				}
				else
				{
					mini = min(a[r - 1][c], a[r][c - 1]);
					mini = min(mini, a[r - 1][c - 1]);
					a[r][c] = mini + 1;
				}
			}
		}
		cout << a[m][n];
	}
    return 0;
}

