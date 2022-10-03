#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<fstream>
#include <algorithm>


int main() {

	int a = 0, x = 0, y = 0;
	for (int i = 1; i <= 5; i += 1) {
		for (int j = 1; j <= 5; j += 1) {
			std::cin >> a;
			if (a == 1) {
				x = i;
				y = j;
			}
		}
	}
	
	std::cout << abs(x - 3) + abs(y - 3);
	return 0;
}
