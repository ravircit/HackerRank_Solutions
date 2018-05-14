// Recursion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <algorithm>
using namespace std;
int fun1(int x, int y);
int main()
{
	int x = fun1(3, 2);
	cout << x;
    return 0;
}
int fun1(int x, int y)
{
	if (x == 0)
		return y;
	else
		return fun1(x - 1, x + y);
}
