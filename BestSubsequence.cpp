// BestSubsequence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<vector>
#include<iostream>
using namespace std;
int main()
{
	//code
	int t;
	cin >> t;
	while (t--)
	{
		int n, x, total = 0, sum = 0, d,total_odd=0;
		cin >> n;
		vector<int>v(n, 0);
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			//v.push_back(x);
			v[i] = x;
		}
		total_odd = v[0];
		for (int i = 0; i < n; i++)
		{
			sum += v[i];
			if (total_odd < sum&&sum % 2 == 1)
				total_odd = sum;
		}
		if (total_odd > 0)
			cout << total_odd << "\n";
	}
	return 0;
}