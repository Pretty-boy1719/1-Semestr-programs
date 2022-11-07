#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<fstream>
#include <algorithm>
#include<set>


int DecDouble(int a) {
	int count = 0;
	while (a % 2 == 0) {
		count += 1;
		a /= 2;
	}
	return count;
}

int main() {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);

	int x = 0;

	std::cin >> x;

	int count = 0;

	while (x > 0) {
		if (x & 1)count += 1;
		x >>= 1;
	}

	std::cout << count;
}
