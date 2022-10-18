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
		std::vector<int> a(n, 0);

		for (int i = 0; i < n; i += 1) {
			std::cin >> a[i];
		}

		int ans = a[0];

		for (int i = 1; i < n; i += 1) {
			ans = ans & a[i];
		}
		std::cout << ans << std::endl;
		t -= 1;
	}
}
