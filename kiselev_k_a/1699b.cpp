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
		int n = 0, m = 0;
		std::cin >> n >> m;

		for (int i = 1; i <= n; i += 1) {
			for (int j = 1; j <= m; j += 1) {
				
				std::cout << ((i % 4 <= 1) != (j % 4 <= 1))<<" ";
			}
			std::cout << std::endl;
		}


		t -= 1;
	}
}
