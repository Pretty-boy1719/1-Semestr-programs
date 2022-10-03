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

	int y1, a1, a2, a3, a4;
	std::cin >> y1;
	for (int i = y1 + 1; i <= 9012; i++) {
		a1 = i / 1000;
		a2 = (i - a1 * 1000) / 100;
		a3 = (i - a1 * 1000 - a2 * 100) / 10;
		a4 = i % 10;
		if (a1 != a2 && a1 != a3 && a1 != a4 && a2 != a3 && a2 != a4 && a3 != a4) {
			std::cout << i;
			break;
		}
	}
}
