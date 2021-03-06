#include <queue>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <functional>
#include <fstream>
#include <climits>
#include <ctime>

using namespace std;

const int MaxN = (int)(1e6);

int ok (int k) {
	int last = 10;
	while (k > 0) {
		int cur = k % 10;
		if (cur > last)
			return false;
		last = cur;
		k /= 10;
	}
	return true;
}

int main () {
	freopen ("input.txt", "r", stdin);
	#ifndef lcl
		freopen ("output.txt", "w", stdout);
	#endif

	int res = 0;

	for (int i = 100000000; i <= 999999999; ++i)
		res += (ok (i));
		
	cout << res;

	return 0;
}

