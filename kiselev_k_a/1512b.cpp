#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<fstream>
#include <algorithm>
#include<set>

char a[400][400];

int main() {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);

	int t = 0;
	std::cin >> t;
	while (t > 0) {
		int n = 0;
		std::cin >> n;

		
		std::pair<int, int> d1{ 0,0 }, d2{ 0,0 };
		bool isFirst = true;

		for (int i = 0; i < n; i += 1) {
			for (int j = 0; j < n; j += 1) {
				std::cin >> a[i][j];
				if (a[i][j] == '*') {
					if (isFirst) {
						isFirst = false;
						d1.first = i;
						d1.second = j;
					}
					else {
						d2.first = i;
						d2.second = j;
					}
				}
			}
		}
		
		if (d1.first > d2.first) swap(d1, d2);

		if (d1.first == d2.first) {
			if (d1.first == 0) {
				a[d1.first + 1][d1.second] = '*';
				a[d2.first + 1][d2.second] = '*';
			}
			else {
				a[d1.first - 1][d1.second] = '*';
				a[d2.first - 1][d2.second] = '*';
			}
		}
		else {
			if (d1.second != d2.second) {
				a[d1.first][d2.second] = '*';
				a[d2.first][d1.second] = '*';
			}
			else if (d1.second < n - 1) {
				a[d1.first][d1.second + 1] = '*';
				a[d2.first][d2.second + 1] = '*';
			}
			else {
				a[d1.first][d1.second - 1] = '*';
				a[d2.first][d2.second - 1] = '*';
			}
		}

		for (int i = 0; i < n; i += 1) {
			for (int j = 0; j < n; j += 1) {
				std::cout << a[i][j];
			}
			std::cout << std::endl;
		}

		t -= 1;
	}
}
