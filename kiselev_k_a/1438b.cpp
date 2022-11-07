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

		std::set<int> b;
		for (int i = 0; i < n; i += 1) {
			int temp = 0;
			std::cin>>temp;
			b.insert(temp);
		}

		bool IsDifferent = b.size() == n ? true : false;

		std::cout << (IsDifferent ? "NO" : "YES")<<std::endl;
		
		t -= 1;
	}

	return 0;
}
