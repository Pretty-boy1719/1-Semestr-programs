#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <set>
#include <fstream>
#include <deque>
#include <queue>
#include <map>



int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	std:: cin >> t;
	vector <int> ans(t);
	for (int u = 0; u < t; u++) {
		int n;
		std::cin >> n;
		std::vector <int> a(n);
		int count = 1;
		int p = 0;
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			if (a[i] == 0) {
				p++;
				if (p == 2) {
					count = -1;
					break;
				}
			}
			else {
				p = 0;
				if (i > 0 && a[i - 1] == 1) count += 5;
				else count++;
			}
		}
		ans[u] = count;
	}
	for (auto now : ans) {
		std::cout << now << endl;
	}
	return 0;
}
