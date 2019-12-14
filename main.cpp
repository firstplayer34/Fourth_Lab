#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int>a;
	int n, x, temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		a.push_back(x);
	}
	int up = 0;
	int d[10000];

	for (int i = 0; i < n; ++i) {
		d[i] = 1;
		for (int j = 0; j < i; ++j)
			if (a[j] < a[i])
				d[i] = max(d[i], 1 + d[j]);
	}
	