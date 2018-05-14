// Flood in Jungle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
double distanceCalculate(double x1, double y1, double x2, double y2);
int main()
{
	int n, maxC,capCount=0,ans;
	cin >> n >> maxC;
	vector<vector<int>>v(n + 1, vector<int>(0, 4));
	for (int i = 1; i <= n; i++)
	{
		int x, y, mNo, t;
		cin >> x >> y >> mNo, t;
		v[i][0] = x;
		v[i][1] = y;
		v[i][2] = mNo;
		v[i][3] = t;
		if (t < mNo)
			capCount++;
	}
	if (capCount > 1)
	{
		ans = -1;
	}
	else
	{

	}
    return 0;
}

double distanceCalculate(double x1, double y1, double x2, double y2)
{
	double x = x1 - x2;
	double y = y1 - y2;
	double dist;

	dist = pow(x, 2) + pow(y, 2);           //calculating distance by euclidean formula
	dist = sqrt(dist);                  //sqrt is function in math.h

	return dist;
}
