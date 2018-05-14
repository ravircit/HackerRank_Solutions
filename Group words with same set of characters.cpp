// Group words with same set of characters.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;
void wordsWithSameCharSet(string[], int);
int main()
{
	string words[] = { "may", "student", "students", "dog",
		"studentssess", "god", "cat", "act", "tab",
		"bat", "flow", "wolf", "lambs", "amy", "yam",
		"balms", "looped", "poodle" };
	int n = sizeof(words) / sizeof(words[0]);
	wordsWithSameCharSet(words, n);
    return 0;
}
void wordsWithSameCharSet(string s[], int n)
{
	unordered_map<string, vector<int>>hash;
	for (int i = 0; i<n; i++)
	{
		string key = getKey(s[i]);
		hash[key].push_back(i);
	}
	for (auto it = hash.begin(); it != hash.end(); it++)
	{
		for (auto v = (*it).second.begin(); v != (*it).second.end(); v++)
			cout << s[*v] << ", ";
		cout << endl;
	}
}
string getKey(string &str)
{
	bool visited[26] = { false };

	// store all unique characters of current
	// word in key
	for (int j = 0; j < str.length(); j++)
		visited[str[j] - 'a'] = true;
	string key = "";
	for (int j = 0; j < 26; j++)
		if (visited[j])
			key = key + (char)('a' + j);
	return key;
}