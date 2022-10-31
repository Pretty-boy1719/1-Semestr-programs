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

		std::vector<int>a(n);

		for (int i = 0; i < n; i += 1) {
			std::cin >> a[i];
		}

		std::cout << a[n - 1] << std::endl;
		
		t -= 1;
	}
}
