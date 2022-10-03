#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<fstream>
#include <algorithm>


int main() {

	int t = 0, n = 0;

	std::cin >> t;
	for (int m = 0; m < t; m++) {
		std::cin >> n;

		std::vector<int>ans;
		int pow=1;

		while (n > 0) {
			if (n % 10 != 0) {
				ans.push_back((n % 10)*pow);
			}
			pow *= 10;
			n /= 10;
		}
		std::cout << ans.size() << "\n";
		for (auto now : ans) {
			std::cout << now << " ";
		}
		std::cout << "\n";

	}
	return 0;
}
