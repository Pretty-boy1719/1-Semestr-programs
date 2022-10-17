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
		int n = 0, count = 0;
		std::cin >> n;

		std::vector<int> a(n, 0);
		for (int i = 0; i < n; i += 1) {
			std::cin >> a[i];
			if (a[i] == 0) count += 1;
		}

		if (count > 0) {
			std::cout << n - count << std::endl;
			t -= 1;
			continue;
		}

		bool f = false;
		for (int i = 0; i < n; i += 1) {
			for (int j = i + 1; j < n; j += 1) {
				if (a[i] == a[j]) f = true;
			}
		}
		if (f) std::cout << n << std::endl;
		else std::cout << n + 1 << std::endl;

		t -= 1;
	}
}
