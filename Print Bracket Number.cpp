// Print Bracket Number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<stack>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int c = 0;
		stack<int>st;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(')
			{
				c++;
				st.push(c);
				cout << c << " ";
			}
			else if (s[i] == ')')
			{
				int x;
				x = st.top();
				st.pop();
				cout << x << " ";
			}
		}
		cout << "\n";
	}
    return 0;
}

