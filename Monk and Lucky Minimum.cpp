// Monk and Lucky Minimum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<unordered_map>
#include <set>
#include <map>
#include <iterator>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long int n;
		unsigned long int x, min = 1000000001;
		cin >> n;
		map <unsigned long, unsigned long>m;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			m[x]++;
			if (x < min)
				min = x;
		}
		if (m.at(min) % 2 == 0)
			cout << "Unlucky\n";
		else
			cout << "Lucky\n";
	}
    return 0;
}

