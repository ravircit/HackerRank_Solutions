// Balanced String Or Not.cpp : Defines the entry point for the console application.
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
int balancedStringOrNot(string input1);


int main() {
	int output;
	string ip1;
	getline(cin, ip1);
	output = balancedStringOrNot(ip1);
	cout << output << endl;
	return 0;
}
int balancedStringOrNot(string s)
{
	stack<char>st;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '{' || s[i] == '(' || s[i] == '[' || s[i] == '<')
			st.push(s[i]);
		else if (s[i] == '}' || s[i] == ')' || s[i] == ']' || s[i] == '>')
			st.pop();
	}
	if (st.empty())
		return 1;
	else
		return -1;
}
