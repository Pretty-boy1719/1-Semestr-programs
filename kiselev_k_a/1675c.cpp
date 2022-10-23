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
		std::string s;
		std::cin >> s;

		int ans = 0;

		int pointer_lier = -1;
		for (int i = 0; i < s.size(); i += 1) {
			if (s[i] == '1') pointer_lier = i;
		}


		if (pointer_lier != -1) {
						
			int point_fst_zero = s.size()-1;

			for (int i = pointer_lier + 1; i < s.size(); i += 1) {
				if (s[i] == '0') {
					point_fst_zero = i;
					break;
				}
			}

			ans = point_fst_zero - pointer_lier + 1;
		}
		else {
			int point_fst_zero = s.size() - 1;
			for (int i = 0; i < s.size(); i += 1) {
				if (s[i] == '0') {
					point_fst_zero = i;
					break;
				}
			}
			ans = point_fst_zero - 0 + 1;
		}
		std::cout << ans << std::endl;

		t -= 1;
	}
}
