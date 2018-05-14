// Febbonaci_DP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int fib(int);
int main()
{
	int n;
	cin >> n;
	cout << fib(n);
    return 0;
}
int fib(int n)
{
	vector<int>v(n, 0);
	//if (v[n] == NULL)
	{
		if (n <= 1)
			return n;
		return fib(n - 1) + fib(n - 2);
	}
}

