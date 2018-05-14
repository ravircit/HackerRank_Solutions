// A Small Step Toward Calculators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<vector>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n;
	if (s[1] == '-')
		n = (s[0] - '0') - (s[2] - '0');
	else
		n = (s[0] - '0') + (s[2] - '0');
	cout << n;
    return 0;
}

