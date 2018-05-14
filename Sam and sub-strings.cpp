// Sam and sub-strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	vector<long long>v;
	long long total = 0;
	long long d = 0;
	while (n > 0)
	{
		v.push_back(n % 10);
		n = n / 10;
		d++;
	}
	reverse(v.begin(), v.end());
	long long **dp = new long long*[d];
	for (long i = 0; i < d; i++)
	{
		dp[i] = new long long[d] {0};
	}
	for (long long i = 0; i < d; i++)
	{
		dp[0][i] = v[i];
		total += v[i];
	}
	for (long long i = 1; i < d; i++)
	{
		for (long long j = i; j < d; j++)
		{
			dp[i][j] = dp[i - 1][j - 1] * 10 + v[j];
			total += dp[i][j];
		}
	}
	for (long long i = 0; i < d; i++)
	{
		for (long long j = 0; j < d; j++)
		{
			cout << " " << dp[i][j];
		}
		cout << "\n";
	}
    return 0;
}

