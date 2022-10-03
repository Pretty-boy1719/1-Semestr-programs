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
		int n = 0,k=0;
		std::string s;
		std::cin >> n >> s >> k;
		std::vector<char> a(k);
		for (int i = 0; i < k; i += 1) {
			std::cin >> a[i];
		}

		std::vector<int> TransformString(n);
		for (int i = 0; i < n; i += 1) {
			TransformString[i] = 0;
			for (int j = 0; j < k; j += 1) {
				if (s[i] == a[j]) {
					TransformString[i] = 1;
					continue;
				}
			}
		}

		int ans = 0, count = 0;
		bool first = true;
		for (int i = 0; i < n; i += 1) {
			if (TransformString[i] == 0) {
				count += 1;
				continue;
			}
			if (first) {
				first = false;
				ans = std::max(ans, count);
				count = 0;
				continue;
			}
			count += 1;
			ans = std::max(ans, count);
			count = 0;
		}
		std::cout << ans << "\n";
		t -= 1;
	}
	return 0;
}
