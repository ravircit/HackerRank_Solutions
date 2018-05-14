// Coin Change.cpp : Defines the entry point for the console application.
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
string CoinChange(int input1, vector < int > input2);
int main() {
	string output;
	int ip1;
	cin >> ip1;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	int ip2_size = 0;
	cin >> ip2_size;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	vector<int> ip2;
	int ip2_item;
	for (int ip2_i = 0; ip2_i<ip2_size; ip2_i++) {
		cin >> ip2_item;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		ip2.push_back(ip2_item);
	}
	output = CoinChange(ip1, ip2);
	cout << output << endl;
	return 0;
}

string CoinChange(int input1, vector < int > input2)
{
	//Write code here
}


