// MapCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<unordered_map>
#include <set>
#include <map>
#include <iterator>
using namespace std;

int main()
{
	set<pair<int, int>>sp;
	sp.insert(make_pair(2,2));
	sp.insert(make_pair(1, 3));
	sp.insert(make_pair(2, 4));
	sp.insert(make_pair(4, 6));
	int myints1[] = { 10,20,30,40,50 };
	int myints2[] = { 50,40,30,20,5 };
	int myints3[] = { 5,50,40,30,20 };
	int myints4[] = { 40,30,20 };
	vector<int>vt(4, 0);
	vt[1] = 1;
	vt[2] = 2;
	std::set<int> s1(myints1, myints1 + 5);
	std::set<int> s2(myints2, myints2 + 5);
	std::set<int> s3(myints3, myints3 + 5);
	std::set<int> s4(vt.begin(), vt.end());
	if (s1 == s2) {
		cout << "yes";
	}
	set<set<int>>st;
	st.insert(s1);
	st.insert(s2);
	st.insert(s3);
	st.insert(s4);
	map<set<int>,int>ms;
	ms.insert_or_assign(s1, 1);
	ms.insert_or_assign(s2, 1);
	ms.insert_or_assign(s1, 2);
	vector<pair<int, int>>v(5, pair<int, int>(0,0));

	v[0].first = 5;
	v[0].second = 4;
	v[1].first = 2;
	v[1].second = 3;
	v[2].first = 1;
	v[2].second = 8;
	v[3].first = 1;
	v[3].second = 4;
	sort(v.begin(),v.end());
	//map<int>m;
	map <int, int> gquiz1;        // empty map container
	gquiz1[9]++;
	gquiz1[9]++;
	gquiz1[9]++;
	gquiz1.insert_or_assign(1,1);
								  // insert elements in random order
	gquiz1.insert(pair <int, int>(1, 40));
	gquiz1.insert(pair <int, int>(1, 30));
	gquiz1.insert(pair <int, int>(3, 60));
	gquiz1.insert(pair <int, int>(4, 20));
	gquiz1.insert(pair <int, int>(5, 50));
	gquiz1.insert(pair <int, int>(6, 50));
	gquiz1.insert(pair <int, int>(7, 10));
	
	std::set<int> first;                           // empty set of ints
	int a = gquiz1.at(9);
	int myints[] = { 10,20,30,40,50,40 };
	std::set<int> second(myints, myints + 5);
	// printing map gquiz1
	map <int, int> ::iterator itr;
	cout << "\nThe map gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
	{
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	// assigning the elements from gquiz1 to gquiz2
	map <int, int> gquiz2(gquiz1.begin(), gquiz1.end());

	// print all elements of the map gquiz2
	cout << "\nThe map gquiz2 after assign from gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
	{
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	// remove all elements up to element with key=3 in gquiz2
	cout << "\ngquiz2 after removal of elements less than key=3 : \n";
	cout << "\tKEY\tELEMENT\n";
	gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
	{
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}

	// remove all elements with key = 4
	int num;
	num = gquiz2.erase(4);
	cout << "\ngquiz2.erase(4) : ";
	cout << num << " removed \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
	{
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}

	cout << endl;

	//lower bound and upper bound for map gquiz1 key = 5
	cout << "gquiz1.lower_bound(5) : " << "\tKEY = ";
	cout << gquiz1.lower_bound(5)->first << '\t';
	cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second << endl;
	cout << "gquiz1.upper_bound(5) : " << "\tKEY = ";
	cout << gquiz1.upper_bound(5)->first << '\t';
	cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second << endl;

	return 0;

}

