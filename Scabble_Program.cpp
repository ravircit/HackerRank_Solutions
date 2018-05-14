// Scabble_Program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
#include <time.h>
using namespace std;
int main()
{
    char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string inputString = {};
	int stringLength = sizeof(alpha) - 2;

	//generating random char and storing in string
	for (int i = 0; i < 7; i++)
		inputString = inputString + alpha[rand() % stringLength];

	sort(inputString.begin(), inputString.end());
	ifstream readFile;
	vector<string>wordList;

	//Reading all Sowpod word
	try
	{
		readFile.open("sowpods.txt");
		char output[100];
		//Storing all word in List
		if (readFile.is_open()) {
			while (!readFile.eof())
			{
				readFile >> output;
				wordList.push_back(output);
			}
		}
		readFile.close();
	}
	catch(exception e)
	{
		cout << "File not found";
	}

	//Matching dictionary word with input string
	for (int i = 0; i < wordList.size(); i++)
	{
		string outputString;
		outputString = wordList[i];
		int k = 0;
		sort(outputString.begin(), outputString.end());
		int lenStr;
		lenStr = outputString.length();
		for (int j = 0; j < inputString.size(); j++)
		{
			if (outputString[k] == inputString[j])
				k++;
			if (k == lenStr)
			{
				cout << outputString << "\n";
				break;
			}
		}
	}
	return 0;
}

