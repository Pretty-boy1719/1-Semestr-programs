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

	int n = 0;
	std::string s = "";
	
	std::cin >> n >> s;

	bool isLeft = false;
	bool isFirst = true;
	int count = 0;

	int x = 0, y = 0;
	for (int i = 0; i < n; i += 1) {
		if (s[i] == 'U') y += 1;
		else x += 1;

		if (isFirst) {
			isFirst = false;
			if (x < y) isLeft = true;
			else isLeft = false;
		}

		if (x > y && isLeft) {
			count += 1;
			isLeft = false;
		}

		if (x < y && !isLeft) {
			count += 1;
			isLeft = true;
		}
	}
	std::cout << count;

}
