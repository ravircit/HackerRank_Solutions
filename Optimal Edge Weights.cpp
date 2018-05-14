// Optimal Edge Weights.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//#define ll long long
bool vis[200005];
long long sub[200005];
vector<int>v[200005];
vector<long long>vec;
long long ans;
void dfs(int node);
void dfs(int node)
{
	vis[node] = 1; sub[node]++;
	for (auto u : v[node])
	{
		if (!vis[u])
		{
			dfs(u);
			sub[node] += sub[u];
		}
	}
}
int main()
{
	 long n, two;
	cin >> n >> two;
	for (int i = 1; i <= n; i++)
	{
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	long long w[200005];
	for (int i = 0; i<n; i++)
		cin >> w[i];
	dfs(1);
	sort(w, w + n);
	for (int i = 2; i <= n + 1; i++)
		vec.push_back((n - sub[i] + 1)*sub[i]);
	sort(vec.begin(), vec.end());
	for (int i = 0; i<n; i++)
		ans += vec[i] * w[i];
	cout << ans << "\n";
	return 0;
}



