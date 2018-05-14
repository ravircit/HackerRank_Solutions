// Minimum Number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int t_i = 0; t_i<T; t_i++)
	{
		int N;
		cin >> N;
		int K;
		cin >> K;
		int Q;
		cin >> Q;
		vector<int> arr(N);
		for (int i_arr = 0; i_arr<N; i_arr++)
		{
			cin >> arr[i_arr];
		}
		sort(arr.begin(), arr.end());
		if (K == 1)
		{
			if (arr[N - 1]<Q)cout << arr[N - 1] << "\n";
			else cout << "NO\n"; continue;
		}
		if (arr[0]<Q)cout << arr[0] << "\n";
		else cout << "NO\n";
	}
}
