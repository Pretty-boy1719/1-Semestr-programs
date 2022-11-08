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
		int n = 0, A = 0, B = 0;
		std::cin >> n >> A >> B;

		int s0 = 0;
		std::cin >> s0;

		std::vector<int>s(n - 1, 0);
		int S = s0;
		for (int i = 0; i < n-1; i += 1) {
			std::cin >> s[i];
			S += s[i];
		}

		sort(s.begin(), s.end());
		reverse(s.begin(), s.end());

		int MinCountOfCloseHole = 0;
		for (int i = 0; i < n - 1; i += 1) {
			if (S>0 && (double)s0*A / (double)S < (double)B) {
				MinCountOfCloseHole += 1;
				S -= s[i];
			}
		}

		std::cout << MinCountOfCloseHole;

		t -= 1;
	}

	return 0;
}
