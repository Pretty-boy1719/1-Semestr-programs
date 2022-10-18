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

	int n = 0, k = 0;
	
	std::cin >> n >> k;
	
	std::vector<int>a(n, -1);
	
	for (int i = 0; i < n; i += 1) {
		std::cin >> a[i];
	}
	std::sort(a.begin(), a.end());

	int ans = 0;

	for (auto now : a) {
		if (k%now == 0) {
			ans = k / now;
		}
	}
	std::cout << ans;

}
