// Super Reduced String.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include<string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	cin >> s;
	vector<char>v;
	int f = 0;
	for (int i = 0; i < s.length(); i++)
	{
		v.push_back(s[i]);
	}
	for (int i = 0; i < v.size()-1; i++)
	{
		for (int j = i+1; j < s.size(); j++)
		{
			//if (s[i] == s[j +1])
				//s.erase(remove(s.begin()+j,s.end(),s[j]));
			if (s[i] == s[j]&&s[i]!='0')
			{
				s[i] = '0';
				s[j] = '0';
			}
		}
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '0')
		{
			f++;
			cout << s[i];
		}
	}
	if (f == 0)
		cout << "Empty String";
	/*sort(v.begin(), v.end());
	v.erase(std::unique(v.begin(), v.end()), v.end());*/
    return 0;
}

