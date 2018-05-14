// Mini-Max Sum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	long long int sum = 0, min = 10000000001, max = 0;
	long long *a = new long long[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
		sum += a[i];
	}
	cout << sum - max << " " << sum - min;
    return 0;
}

