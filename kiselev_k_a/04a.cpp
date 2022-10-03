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

	int w = 0;
	std::cin >> w;
	if (w % 2 == 0 && w != 2) std::cout << "YES";
	else std::cout << "NO";
}
