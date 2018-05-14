// Sum of sum of digits.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long n, q;
	cin >> n >> q;
	long long *v = new long long[n];
	for (long i = 0; i < n; i++)
	{
		long long x;
		long long s = 0;
		cin >> x;
		while (true)
		{
			while (x > 0)
			{
				s = s + x % 10;
				x = x / 10;
			}
			if (s < 10)
				break;
			else
			{
				x = s;
				s = 0;
			}
		}
		v[i] = s;
	}
	sort(v, v + n);
	long long *cumSum = new  long long[n];

	cumSum[0] = v[0];

	for (long long i = 1; i<n; i++)
		cumSum[i] = v[i] + cumSum[i - 1];
	while (q--)
	{
		long long ans = 0;
		long long t, k;
		cin >> t >> k;
		if (t == 1)
		{
			if (k == n)
				ans = cumSum[n - 1];
			else
			{
				ans = (cumSum[n - 1] - cumSum[n - (k + 1)]);
			}
		}
		else
		{
			ans = cumSum[k - 1];
		}
		cout << ans << "\n";
	}
	return 0;
}