// Maximum occurrence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include <vector>
#include <algorithm>

#include <string>
using namespace std;

int main()
{
	//string s;
	char s[10005];
	cin.getline(s, 1000);
	vector<int>v(256, 0);
	int l = strlen(s),max=0,ind=0;
	for (int i = 0; i < l; i++)
	{
		v[s[i]]++;
	}
	for (int i = 0; i < 256; i++)
	{

		if (v[i] > max)
		{
			max = v[i];
			ind = i;
		}
	}
	cout << char(ind)<<" " << max;
    return 0;
}

