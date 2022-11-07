#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<fstream>
#include <algorithm>
#include<set>
#include<queue>

int main() {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);

	long long a = 0, m = 0;
	std::cin >> a >> m;

	int CountOfOperation = 0;
	int TempSum = a;

	bool IsStopped = false;

	while (!IsStopped && CountOfOperation < 100) {
		TempSum += TempSum % m;
		

		if (TempSum%m == 0) {
			IsStopped = true;
		}

		CountOfOperation += 1;
	}

	std::cout << (IsStopped ? "Yes" : "No");

	return 0;
}
