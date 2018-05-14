// Maximum Subarray Sum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<set>
using namespace std;


//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n, m;
//		cin >> n >> m;
//		vector<int>v(7, 0);
//		for (int i = 0; i < n; i++)
//		{
//			int x;
//			cin >> x;
//			v[x % 7]++;
//		}
//	}
//    return 0;
//}

typedef long long int ll;

void solve()
{
	ll N, M;
	ll x, prefix = 0, maxim = 0;
	cin >> N >> M;
	set<ll> S;
	S.insert(0);
	for (int i = 1; i <= N; i++) {
		cin >> x;
		prefix = (prefix + x) % M;
		maxim = max(maxim, prefix);
		set<ll>::iterator  it = S.lower_bound(prefix + 1);
		if (it != S.end()) {
			maxim = max(maxim, prefix - (*it) + M);
		}
		S.insert(prefix);
	}
	cout << maxim << endl;
}

int main()
{
	int T;
	cin >> T;
	while (T--)    solve();
	return 0;
}