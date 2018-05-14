// Poisonous Plants.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main()
{
	int n, f = 0,flip=0,count=0;
	cin >> n;
	vector<int>v(n);
	stack<int>s;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	for (int i = 0; i<v.size(); i++)
	{
		f = 0;
		flip = 0;
		for (int j = 0; j < v.size()-1; j++)
		{
			if (v[j] < v[j + 1])
			{
				f = 1;
				s.push(j + 1);
			}
		}
		if (f == 1 )
			count++;
		while (!s.empty())
		{
			v.erase(v.begin() + s.top());
			s.pop();
		}
	}
	cout << count;
    return 0;
}

