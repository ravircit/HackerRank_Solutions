// Stamp the matrix.cpp : Defines the entry point for the console application.
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
		long long m, n, k, mul;
		cin >> m >> n >> k;
		long long r_m, r_n;
		r_m = k%m;
		r_n = k%n;
		mul = m*n;
		if (mul <= k)
			cout << mul << "\n";
		else
		{
			if (r_m > r_n)
			{
				cout << (k / n)*n << "\n";
			}
			else
				cout << (k / m)*m << "\n";
		}
	}
    return 0;
}



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
		long long m, n, k, mul;
		cin >> m >> n >> k;
		long long r_m, r_n;
		r_m = k%m;
		r_n = k%n;
		mul = m*n;
		if (mul <= k)
			cout << mul << "\n";
		else
		{
			if (r_m == r_n)
			{
				while (m--)
				{
					if ((k / m) <= n)
						cout << (k / m)*m;
				}
			}
			if (r_m > r_n)
			{
				cout << (k / n)*n << "\n";
			}
			else
				cout << (k / m)*m << "\n";
		}
	}
	return 0;
}