// Minimum Distinct Ids.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

// Function to find distintc id's
int distinctIds(int arr[], int n, int mi)
{
	unordered_map<int, int> m;
	vector<pair<int, int> > v;
	int count = 0;

	// Store the occurrence of ids
	for (int i = 0; i < n; i++)
		m[arr[i]]++;

	// Store into the vector second as first and vice-versa
	for (auto it = m.begin(); it != m.end(); it++)
		v.push_back(make_pair(it->second, it->first));

	// Sort the vector
	sort(v.begin(), v.end());

	int size = v.size();

	// Start removing elements from the beginning
	for (int i = 0; i < size; i++) {

		// Remove if current value is less than 
		// or equal to mi
		if (v[i].first <= mi) {
			mi -= v[i].first;
			count++;
		}

		// Return the remaining size
		else
			return size - count;
	}
	return size - count;
}

// Driver code
int main()
{
	int arr[] = { 2, 3, 1, 2, 3, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int m = 2;

	cout << distinctIds(arr, n, m);
	return 0;
}

