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

	int t = 0;
	t = 1;

	while (t > 0) {
		int n = 0;
		std::cin >> n;
		
		int SumOfThomas = 0;

		int t1 = 0, t2 = 0, t3 = 0, t4 = 0;
		std::cin >> t1 >> t2 >> t3 >> t4;
		SumOfThomas = t1 + t2 + t3 + t4;

		int CountOfPeopleLessThenThomas = 0;

		for (int i = 1; i < n; i += 1) {
			std::cin >> t1 >> t2 >> t3 >> t4;
			if (SumOfThomas < t1 + t2 + t3 + t4) {
				CountOfPeopleLessThenThomas += 1;
			}
		}

		std::cout << CountOfPeopleLessThenThomas+1;
		t -= 1;
	}

	return 0;
}
