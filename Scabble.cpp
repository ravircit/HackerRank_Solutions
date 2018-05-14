// Scabble.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
#include <time.h>
using namespace std;
int count1 = 0;
void printAll(string str);
int main()
{
	clock_t t;
	t = clock();
	char alpha[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string result = {};
	int stringLength = sizeof(alpha) - 2;

	for (int i = 0; i < 7; i++)
		result = result+alpha[rand() % stringLength];
	//result = "QRJATYD";
	result = "APFDSTE";
	sort(result.begin(), result.end());
	ifstream myReadFile;
	myReadFile.open("sowpods.txt");
	vector<string>s;
	char output[100];
	if (myReadFile.is_open()) {
		while (!myReadFile.eof()) {


			myReadFile >> output;
			s.push_back(output);
			//if (find(s.begin(), s.end(), "AA") != s.end())
				//cout << "yes";
			//cout << output;


		}
		//string str;
		//while (getline(myReadFile, str))
		//{
		//	// Process str
		//	s.push_back(output);
		//}

	}
	myReadFile.close();
	/*for (int i = 0; i < s.size(); i++)
	{
		string st;
		st = s[i];
		int k = 0;
		sort(st.begin(), st.end());
		int lenSt;
		lenSt = st.length();
		for (int j = 0; j < result.size(); j++)
		{
			if (st[k] == result[j])
				k++;
			if (k == lenSt)
			{
				cout << st << "\n";
				count1++;
				break;
			}
		}
	}*/
	cout << count1;

	t = clock() - t;
	double time_taken = ((double)t) / CLOCKS_PER_SEC; // in seconds

	printf("fun() took %f seconds to execute \n", time_taken);
    return 0;
}

void printAll(string str)
{
	/* Number of subsequences is (2**n -1)*/
	int n = str.length();
	unsigned int opsize = pow(2, n);
	string subString;
	/* Generate all subsequences of given strint.
	using counter 000..1 to 111..1*/
	string subs = "";
	vector<string>allString;
	for (int counter = 1; counter < opsize; counter++)
	{
		subs ="";
		for (int j = 0; j < n; j++)
		{
			/* Check if jth bit in the counter is set
			If set then print jth element from arr[] */
			if (counter & (1 << j))
				subs.push_back(str[j]);
		}

		/* Print all permutations of current subsequence */
		//subString = next_permutation(subs.begin(), subs.end());
		
		do
		{
			subString = next_permutation(subs.begin(), subs.end());
			allString.push_back(subString);
		} while (next_permutation(subs.begin(), subs.end()));
	}
	cout << count1 << "\n";
}
