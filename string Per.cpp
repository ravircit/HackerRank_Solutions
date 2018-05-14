// string Per.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<vector>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	vector<int>v(26, 0);
	vector<int>c(s.length,0);
	for (int i = 0; i < s.length(); i++)
	{
		v[s[i] - 'a']++;
	}
	int j = 0,l=s.length();
	l--;
	for (int i = 0; i < 26; i++)
	{
		if (v[i] % 2 == 0)
		{
			v[j] = v[i] / 2 + 'a';
			v[l]=v[]
		}
	}
    return 0;
}

