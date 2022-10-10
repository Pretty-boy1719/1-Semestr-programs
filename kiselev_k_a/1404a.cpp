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
		int n = 0, k = 0;
		std::string s;
		std::cin >> n >> k >> s;

		int count_one = 0, count_zero = 0;
		bool f = true;
		for (int i = 0; i < k; i += 1) {
			int temp = -1;
			if (!f)break;

			for (int j = i; j < n; j += k) {
				if (s[j] != '?') 
				{
					if (temp != -1 && s[j] - '0' != temp) {
						f = false;
						break;
					}
					temp = s[j] - '0';
				}
			}
			if (temp != -1) {
				if (temp == 0) count_zero += 1;
				else count_one += 1;
			}
		}
		if (std::max(count_one, count_zero) > k / 2) f = false;
		if (f) std::cout << "YES" << std::endl;
		else std::cout << "NO" << std::endl;

		t -= 1;
	}
}
