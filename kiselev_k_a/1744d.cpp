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

	int t = 0;
	std::cin >> t;
	while (t > 0) {
		int n = 0;
		std::cin >> n;
		std::vector<int>a(n, 0);
		for (int i = 0; i < n; i += 1) {
			std::cin >> a[i];
		}
		
		int count_double = 0;
		for (int i = 0; i < n; i += 1) {
			count_double += DecDouble(a[i]);
		}

		std::vector<int>doubles;
		for (int i = 2; i <= n; i += 1) {
			int temp = DecDouble(i);
			if (temp > 0) {
				doubles.push_back(temp);
			}
		}

		sort(doubles.begin(), doubles.end());
		int pointer_doubles = doubles.size()-1;

		int count_operation = 0;

		while (count_double < n && pointer_doubles >= 0)
		{
			count_double += doubles[pointer_doubles];
			count_operation += 1;
			pointer_doubles -= 1;
		}

		std::cout << (count_double >= n ? count_operation : -1) << std::endl;
		
		t -= 1;
	}
}
