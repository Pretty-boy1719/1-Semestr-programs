#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<fstream>
#include <algorithm>
#include<set>



int main() {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);

	int t = 0;
	std::cin >> t;
	while (t > 0) {
		char a[8][8];
		for (int i = 0; i < 8; i += 1) {
			for (int j = 0; j < 8; j += 1) {
				std::cin >> a[i][j];
			}
		}

		int x = 0, y = 0;
		for (int i = 0; i < 6; i += 1) {
			for (int j = 0; j < 6; j += 1) {
				if (a[i][j] == '#' &&
					a[i][j + 2] == '#' &&
					a[i + 1][j + 1] == '#' &&
					a[i + 2][j] == '#' &&
					a[i + 2][j + 2] == '#') {
					x = i + 2;
					y = j + 2;
				}
			}
		}
		std::cout << x << " " << y << std::endl;
		t -= 1;
	}
}
