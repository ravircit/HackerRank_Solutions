// Game of Two Stacks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int g;
	cin >> g;
	for (int a0 = 0; a0 < g; a0++) {
		int n;
		int m;
		int x;
		int sum = 0,i=0,j=0,count=0;
		cin >> n >> m >> x;
		vector<int> a(n);
		for (int a_i = 0; a_i < n; a_i++) {
			cin >> a[a_i];
		}
		vector<int> b(m);
		for (int b_i = 0; b_i < m; b_i++) {
			cin >> b[b_i];
		}
		// your code goes here
		while (sum<x)
		{
			if (a[i] > b[j]&& j < m)
			{
				sum += b[j];
				j++;
			}
			else if(i<n)
			{
				sum += a[i];
				i++;
			}
			count++;
		}
		cout << count-1;
	}
	return 0;
}

