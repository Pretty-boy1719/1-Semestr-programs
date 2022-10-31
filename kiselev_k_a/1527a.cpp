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
		int n = 0;

		std::cin >> n;
		int max = 0;

		for (int i = 0; i < 64; i += 1) {
			if ((n >> i) & 1) {
				max = i;
			}
		}

		std::cout << (1 << max) - 1 << std::endl;
		t -= 1;
	}
}
