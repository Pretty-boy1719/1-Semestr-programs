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
	std::cin >> t;

	while (t > 0) {
		int n = 0;
		std::cin >> n;

		std::vector<std::pair<int, int>>History(n - 1, { 0,0 });
		std::multiset<int>NumOnBoard;

		for (int i = 1; i <= n; i += 1) {
			NumOnBoard.insert(i);
		}

		for (int i = 0; i < n - 1; i += 1) {
			auto it = NumOnBoard.end();
			it--;
			int FirstaMaxNum = *it;
			NumOnBoard.erase(it);

			it = NumOnBoard.end();
			it--;
			int SecondMaxNum = *it;
			NumOnBoard.erase(it);

			NumOnBoard.insert((FirstaMaxNum + SecondMaxNum + 1) / 2);
			History[i] = { FirstaMaxNum,SecondMaxNum };
		}

		std::cout << *NumOnBoard.begin() << std::endl;
		for (auto now : History) {
			std::cout << now.first << " " << now.second << std::endl;
		}

		t -= 1;
	}

	return 0;
}
