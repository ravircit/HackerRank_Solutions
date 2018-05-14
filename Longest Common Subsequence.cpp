// Longest Common Subsequence.cpp : Defines the entry point for the console application.
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
		int row, col;
		cin >>col>>row;
		string s1;
		string s2;
		cin >> s1;
		cin >> s2;
		vector<vector<int>>v(row + 1, vector<int>(col + 1, 0));
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (s2[i] == s1[j])
				{
					v[i + 1][j + 1] = v[i][j] + 1;

				}
				else
				{
					int m = v[i + 1][j] > v[i][j + 1] ? v[i + 1][j] : v[i][j + 1];
					v[i + 1][j + 1] = m;
				}
			}

		}
		cout << v[row][col]<<"\n";
	}
    return 0;
}

