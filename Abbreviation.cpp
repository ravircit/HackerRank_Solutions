// Abbreviation.cpp : Defines the entry point for the console application.
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
		string s1, s2;
		cin >> s1;
		cin >> s2;
		int c = 0;
		int j;
		int cp = 0;
		for (int i = 0; i < s2.size();)
		{
			for (j = 0; j < s1.size(); )
			{
				if (s2[i] == s1[j] || s2[i] == char(s1[j] - 32))
				{
					i++;
					j++;
					c++;
				}
				else
				{
					if (s1[j] >= 'A'&&s1[j] <= 'Z')
						cp++;
					j++;
				}
			}
			if (j == s1.size())
				break;
		}
		if (c == s2.size() && cp==0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
    return 0;
}

