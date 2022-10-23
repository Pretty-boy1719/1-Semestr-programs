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
		std::cin >> n >> k;
		std::string s;
		std::cin >> s;

		int min_white_cell = k + 1;
		int temp_white_cell = 0;
		char left_cell = s[0];
		char right_cell = s[k - 1];

		for (int i = 0; i < k; i += 1) {
			if (s[i] == 'W') {
				temp_white_cell += 1;
			}
		}

		min_white_cell = temp_white_cell;
		
		for (int i = k; i < n; i += 1) {
			
			if (left_cell == 'W') {
				temp_white_cell -= 1;
			}

			left_cell = s[i-k+1];
			right_cell = s[i];

			if (right_cell == 'W') {
				temp_white_cell += 1;
			}

			min_white_cell = std::min(min_white_cell, temp_white_cell);
		}

		std::cout << min_white_cell << std::endl;

		t -= 1;
	}
}
