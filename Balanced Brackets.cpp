// Balanced Brackets.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include<stack>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int t, f = 0;
	cin >> t;
	while (t--)
	{
		f = 0;
		string s;
		stack<char>sc;
		cin >> s;
		for (int i = 0; i<s.length(); i++)
		{
			if (s[i] == '(' || s[i] == '[' || s[i] == '{')
				sc.push(s[i]);
			else {
				if (sc.size() > 0)
				{

					char top;
					top = sc.top();
					if (top == '('&&s[i] == ')')
						sc.pop();
					else if (top == '['&&s[i] == ']')
						sc.pop();
					else if (top == '{'&&s[i] == '}')
						sc.pop();
					else
					{
						f = 1;
						break;
					}

				}
				else
				{
					f = 1;
					break;
				}
			}
		}
		if (sc.empty() && f == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}

