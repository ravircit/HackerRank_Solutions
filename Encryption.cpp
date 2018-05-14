// Encryption.cpp : Defines the entry point for the console application.
//ONLY For capital letter

#include "stdafx.h"
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		int diff;
		diff = s[i]-'A';
		char c = ('Z' - diff);
		cout << c;
	}
    return 0;
}

