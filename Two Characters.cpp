// Two Characters.cpp : Defines the entry point for the console application.
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
int maxLen(string s);
int maxLen(string s) {
	// Complete this function
	vector<int>v(26, 0);
	char st[1000];
	int j = 0;
	for (int i = 0; i<s.length(); i++)
	{
		v[s[i] - 'a']++;
		if (v[s[i]-'a'] == 1)
		{
			st[j] = s[i];
			j++;
		}
	}
	cout << "fds";
	return 1;
}

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int result = maxLen(s);
	cout << result << endl;
	return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool alternating(string &s) {
	if (s.size() < 2) return 0;
	char a = s[0];
	char b = s[1];
	if (a == b) return 0;

	for (int i = 2; i<s.size(); i++) {
		if (i & 1) {
			if (s[i] != b) return 0;
		}
		else if (s[i] != a) return 0;
	}

	return 1;
}

int main() {
	string s;
	cin >> s;
	cin >> s;

	int ans = 0;
	for (char a = 'a'; a <= 'z'; a++) {
		for (char b = 'a'; b <= 'z'; b++) {
			if (a == b) continue;
			string t;
			for (int i = 0; i<s.size(); i++) {
				if (s[i] == a || s[i] == b) t += s[i];
			}

			if (alternating(t)) ans = max(ans, (int)t.size());
		}
	}
	cout << ans << endl;
	return 0;
}

