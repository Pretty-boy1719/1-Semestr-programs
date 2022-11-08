#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<fstream>
#include <algorithm>
#include<set>
#include<queue>

int main() {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);

	int t = 0;
	t = 1;

	while (t > 0) {
		int n = 0;
		std::cin >> n;
		
		std::vector<int>a(n, 0);
		for (int i = 0; i < n; i += 1) {
			std::cin >> a[i];
		}

		std::set<int> WasInCafe;
		bool WasEverywhere = false;
		int last = 0;
		for (int i = n - 1; i >= 0; i -= 1) {
			if (WasEverywhere)
				break;

			if (WasInCafe.find(a[i]) == WasInCafe.end()) {
				WasInCafe.insert(a[i]);
				last = a[i];
			}
		}
		std::cout << last;

		t -= 1;
	}

	return 0;
}
