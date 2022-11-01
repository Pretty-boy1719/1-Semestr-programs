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

	int n = 0;
	std::cin >> n;

	std::vector<int> a(n, 0);
	for (int i = 0; i < n; i += 1) {
		std::cin >> a[i];
	}

	sort(a.begin(), a.end());

	int CountOfDays = 0;
	int pointer = 0;

	while (pointer < n) 
	{
		if (a[pointer] >= CountOfDays + 1) {
			CountOfDays += 1;
		}

		pointer += 1;
	}
	
	std::cout << CountOfDays;

	return 0;
}
