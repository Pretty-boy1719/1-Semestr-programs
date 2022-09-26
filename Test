#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<fstream>
#include <algorithm>
#include<set>


int main() {

	int t = 0;

	std::cin >> t;
	for (int c = 0; c < t; c++) {
		int n = 0, m = 0, sx = 0, sy = 0, d = 0;
		std::cin >> n >> m >> sy >> sx >> d;

		bool f = true;
		int x = 1, y = 1;
		for (int i = 1; i <= n; i += 1) {
			y = i;
			if (std::abs(sx - x) + std::abs(sy - y) <= d) {
				f = false;
				break;
			}
		}
		for (int j = 1; j <= m; j += 1) {
			x = j;
			if (std::abs(sx - x) + std::abs(sy - y) <= d) {
				f = false;
				break;
			}
		}
		
		if (f) {
			std::cout << n - 1 + m - 1 << "\n";
			continue;
		}

		f = true;
		x = 1, y = 1;
		for (int j = 1; j <= m; j += 1) {
			x = j;
			if (std::abs(sx - x) + std::abs(sy - y) <= d) {
				f = false;
				break;
			}
		}
		for (int i = 1; i <= n; i += 1) {
			y = i;
			if (std::abs(sx - x) + std::abs(sy - y) <= d) {
				f = false;
				break;
			}
		}

		if (f) {
			std::cout << n - 1 + m - 1 << "\n";
			continue;
		}
		else std::cout << -1 << "\n";

	}
	return 0;
}
