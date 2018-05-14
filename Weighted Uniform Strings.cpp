// Weighted Uniform Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include<string>
#include <algorithm>
using namespace std;

int main()
{
	//string s;
	char s[100001];
	cin >> s;
	vector<int>v(27, 0);
	for (int i = 0; s[i]!='\0'; i++)
	{
		v[(s[i] - 'a') + 1]++;
	}
	int q;
	cin >> q;
	while (q--)
	{
		int n,f=0;
		cin >> n;
		f = 0;
		for (int i = 1; i < 27; i++)
		{
			if(v[i]>=1)
			if (n/i<= v[i]&&n%i==0)
			{
				f = 1;
				break;
			}
		}
		if (f == 1)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
    return 0;
}

