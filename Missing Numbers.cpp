// Missing Numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n, m;
	cin >> n;
	vector<int>a(n, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> m;
	vector<int>b(m, 0);
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	vector<int>::iterator min, max;
	min = min_element(b.begin(), b.end());
	max = max_element(b.begin(), b.end());
	int mi, ma;
	mi = *min;
	ma = *max;
	vector<int>v_a(ma - mi + 1, 0);
	vector<int>v_b(ma - mi + 1, 0);
	for (int i = 0; i < a.size(); i++)
	{
		v_a[a[i] - mi]++;
	}
	for (int i = 0; i < b.size(); i++)
	{
		v_b[b[i] - mi]++;
	}
	for (int i = 0; i < (ma-mi); i++)
	{
		if (v_a[i] != v_b[i])
		{
			cout << i + mi << " ";
		}
	}
	return 0;
}
