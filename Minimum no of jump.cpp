// Minimum no of jump.cpp : Defines the entry point for the console application.
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
		int n, wt,j;
		cin >> n;
		vector<int>v(n, 0);
		vector<int>dis(n, 102);
		dis[0] = 0;
		for (int i = 0; i < n; i++)
			cin >> v[i];
		for (j = 1; j < n; j++)
		{
			for (int i = 0; i < j; i++)
			{
				//if (v[j] != 0)
				{
					if (v[i] >= j - i)
					{
						if (dis[j] > dis[i] + 1)
							dis[j] = dis[i] + 1;
					}
				}
				//else
					//dis[j]=0;
			}
		}
		if (dis[j - 1]>0 && dis[j - 1] != 102)
			cout << dis[j - 1] << "\n";
		else
			cout << "-1\n";
	}
	return 0;
}

