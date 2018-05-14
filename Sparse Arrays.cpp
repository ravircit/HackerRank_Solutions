// Sparse Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <limits>
#include <tuple>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cassert>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char s[1000][21];
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	int q;
	cin >> q;
	while (q--)
	{
		char c[21];
		cin >> c;
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			if (strcmp(s[i], c) == 0)
				count++;
		}
		cout << count<<"\n";
	}
    return 0;
}

