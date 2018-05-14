// Count total set bits.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n,sum=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int t;
		t = i;
		while (t)
		{
			if (t % 2 == 1)
				sum++;
			t = t / 2;
		}
	}
	cout << sum;
    return 0;
}

