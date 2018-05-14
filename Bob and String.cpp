// Bob and String.cpp : Defines the entry point for the console application.
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
		int d = 0,sum=0;
		vector<int>v1(26, 0);
		vector<int>v2(26, 0);
		string s1, s2;
		cin >> s1;
		cin >> s2;
		for (int i = 0; i < s1.length(); i++)
		{
			v1[s1[i] - 'a']++;
		}
		for (int i = 0; i < s2.length(); i++)
		{
			v2[s2[i] - 'a']++;
		}
		for (int i = 0; i < 26; i++)
		{
			if (v1[i] > 0)
			{
				if (v2[i] > v1[i])
					d = 0;
				else
					d = v1[i] - v2[i];
				sum = sum + d * 2;
			}
		}
		cout << sum << "\n";
	}
}

