// HackerLand Election.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<map>
using namespace std;
//string electionWinner(vector <string> votes);
//int main()
//{
//
//	string res;
//	int votes_size = 0;
//	cin >> votes_size;
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//	vector<string> votes;
//	for (int i = 0; i < votes_size; i++) {
//		string votes_item;
//		getline(cin, votes_item);
//		votes.push_back(votes_item);
//	}
//
//	res = electionWinner(votes);
//	cout << res << endl;
//
//	return 0;
//}
//
//string electionWinner(vector <string> v) {
//	map<string, int> mymap;
//	string s;
//	int c = 0;
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (mymap.count(v[i]) == 0)
//			mymap[v[i]] = 1;
//		else
//		{
//			mymap[v[i]]++;
//			if (mymap[v[i]] > c)
//			{
//				c = mymap[v[i]];
//			}
//		}
//	}
//	map<string, int>::iterator it;
//	for ( it = mymap.end(); it !=mymap.begin(); it--)
//	{
//		if (it->second == c)
//		{
//			s = it->first;
//			break;
//		}
//	}
//	//sort(mymap.b)
//	return s;
//}
void customSort(vector <int> a);
int main()
{
	int arr_size = 0;
	cin >> arr_size;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	vector<int> arr;
	for (int i = 0; i < arr_size; i++) {
		int arr_item;
		cin >> arr_item;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		arr.push_back(arr_item);
	}

	customSort(arr);

	return 0;
}

/*
* Complete the function below.
*/
void customSort(vector <int> v) {
	map<int, int> mymap;
	vector<pair<int, int> > vec;
	for (int i = 0; i<v.size(); i++)
	{
		if (mymap.count(v[i]) == 0)
			mymap[v[i]] = 1;
		else
		{
			mymap[v[i]]++;
		}
	}
	//sort(mymap.begin(), mymap.end());



}
5
3
1
2
2
4