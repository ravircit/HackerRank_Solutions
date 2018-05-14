// Sherlock and the Valid String.cpp : Defines the entry point for the console application.
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
using namespace std;

string isValid(string s) {
	// Complete this function
	int c = 0,f=0,diff=0;
	vector<int>v(26, 0);
	for (int i = 0; i < s.length(); i++)
	{
		v[s[i] - 'a']++;
	}
	sort(v.begin(), v.end());
	for (int i = v.size()-1; v[i]!=0; i--)
	{
		if (v[i] != v[i - 1])
		{
			diff = v[i] > v[i - 1] ? v[i] - v[i - 1] : v[i - 1] - v[i];
			if (diff == 1)
				c++;
			else
			{
				f = 1;
				break;
			}
		}
		if (c > 1)
		{
			f = 1;
			break;
		}
	}
	if (f == 1)
		return "NO";
	else
		return "YES";
}

int main() {
	string s;
	cin >> s;
	string result = isValid(s);
	cout << result << endl;
	return 0;
}