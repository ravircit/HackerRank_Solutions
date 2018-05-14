// Selection.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include<array>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *a;
	a= new int[n];
	//int b = new int[n];
	int min=0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n-1; i++)
	{
		min = i;
		for (int j = i+1; j < n; j++)
		{
			if (a[j] < a[min])
				min = j;
		}
		int t;
		t = a[i];
		a[i] = a[min];
		a[min] = t;

	}
	cout << "d";
    return 0;
}

