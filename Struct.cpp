// Struct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct Stu
{
	int roll;
	string name;
	float marks;
};


int main()
{
	Stu *sp=NULL;// = new Stu();
	Stu s1;
	sp->roll = 43434;
	sp->name = "Ravi";
	sp->marks = 44.4;

	cout << sp->roll << " " << sp->name << " " << sp->marks;
    return 0;
}

