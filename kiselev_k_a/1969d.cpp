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
		std::string s;
		std::cin >> s;

		int countR = 0;
		int countB = 0;
		bool f = true;

		for (int i = 0; i < n; i += 1) {
			if (s[i] == 'R')countR += 1;
			if (s[i] == 'B')countB += 1;
			if (s[i] == 'W') {
				if (((countR+countB==countR) || 
					(countR+countB==countB)) &&
					(countR+countB != 0)) {
					f = false;
				}
				else {
					countR = countB = 0;

				}
			}
		}
		if (((countR + countB == countR) ||
			(countR + countB == countB)) &&
			(countR + countB != 0)) {
			f = false;
		}
		std::cout << (f ? "YES\n" : "NO\n");
		t -= 1;
	}
}
