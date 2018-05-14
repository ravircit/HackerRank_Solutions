// SubString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string s;
	s = "abcd";
	//cin >> s;
	int n = s.length();
	for (int len = 0; len < n; len++)
	{
		for (int i = 0; i < n-len; i++)
		{
			for (int j = i; j <= i+len; j++)
			{
				cout << s[j];
			}
			cout << "\n";
		}
	}

    return 0;
}

