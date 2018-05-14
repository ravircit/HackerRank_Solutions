// Minimum Loss.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include <set>
using namespace std;

//int main() {
//	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
//	long n,min=0;
//	cin >> n;
//	vector<long>v(n, 0);
//	for (long i = 0; i<n; i++)
//	{
//		cin >> v[i];
//	}
//	vector<long>::iterator max;
//	long d;
//	max = max_element(v.begin(), v.end());
//	min = *max;
//	for (long i = 0; i < n-1; i++)
//	{
//		for (long j = i + 1; j < n; j++)
//		{
//			//long d;
//			if (v[i] > v[j])
//			{
//				d = v[i] - v[j];
//				if (min > d)
//					min = d;
//			}
//		}
//	}
//	cout << min;
//	return 0;
//}




int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	cin >> n;
	set < long long int > S;
	long long int t = 5e18;
	while (n--)
	{

		long long int x;
		cin >> x;
		if (S.upper_bound(x) != S.end())
			t = min(t, *S.upper_bound(x) - x);

		S.insert(x);
	}
	cout << t << "\n";
	return 0;
}

//
//int main()
//{
//	std::set<int> myset;
//	std::set<int>::iterator itlow, itup;
//
//	for (int i = 1; i<10; i++) myset.insert(i * 10); // 10 20 30 40 50 60 70 80 90
//
//	itlow = myset.lower_bound(30);                //       ^
//	itup = myset.upper_bound(60);                 //                   ^
//
//	myset.erase(itlow, itup);                     // 10 20 70 80 90
//
//	std::cout << "myset contains:";
//	for (std::set<int>::iterator it = myset.begin(); it != myset.end(); ++it)
//		std::cout << ' ' << *it;
//	std::cout << '\n';
//
//	return 0;
//}