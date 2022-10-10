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
		for (int i = 1; i <= n; i += 1) {
			for (int j = 1; j <= i; j += 1) {
				if (i == j || j == 1) std::cout << 1;
				else std::cout << 0;
				std::cout << " ";
			}
			std::cout << std::endl;
		}


		t -= 1;
	}

}
