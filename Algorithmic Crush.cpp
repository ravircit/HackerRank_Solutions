// Algorithmic Crush.cpp : Defines the entry point for the console application.
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
	long int m, n, maxi;
	vector<long int>::iterator result;
	cin >> m >> n;
	vector<long int>v(m + 1, 0);
	while (n--)
	{
		long int a, b, k;
		cin >> a >> b >> k;
		for (int i = a; i <= b; i++)
		{
			v[i] = v[i] + k;
		}
	}
	result = max_element(v.begin(), v.end());
	cout << *result;
	return 0;
}

