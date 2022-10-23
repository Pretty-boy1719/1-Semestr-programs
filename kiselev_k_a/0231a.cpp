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
	std::cin >> n;

	int count_solved_task = 0;

	for (int i = 0; i < n; i += 1) {
		int p = 0, v = 0, t = 0;

		std::cin >> p >> v >> t;
		
		if (p + v + t >= 2) {
			count_solved_task += 1;
		}
	}
	
	std::cout << count_solved_task;
}
