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
		char start_color = 'r';
		std::string s;

		std::cin >> n >> start_color >> s;

		if (start_color == 'g') {
			t -= 1;
			std::cout << "0\n";
			continue;
		}

		int max_sec = 0;
		int temp_sec = 0;
		int k = n * 2 + n / 2 + 1;
		int pointer = 0;
		bool is_counting = false;

		while (k > 0) {
			if (!is_counting && s[pointer] == start_color) {
				temp_sec =1;
				is_counting = true;
				pointer = (pointer + 1) % n;
				k -= 1;
				continue;
			}

			if (is_counting && s[pointer] != 'g'){
				temp_sec += 1;
			}

			if (is_counting && s[pointer] == 'g') {
				max_sec = std::max(temp_sec, max_sec);
				temp_sec = 0;
				is_counting = false;
			}

			pointer = (pointer + 1) % n;
			k -= 1;
		}
		
		std::cout << max_sec << std::endl;

		t -= 1;
	}
}
