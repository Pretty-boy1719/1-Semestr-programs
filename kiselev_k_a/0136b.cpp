#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<fstream>
#include <algorithm>
#include<set>

void to_3(int n, std::vector<int>& a) {
	while (n > 0) {
		a.push_back(n % 3);
		n /= 3;
	}
}

int main() {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);

	int a = 0, c = 0;
	std::cin >> a >> c;

	std::vector<int>a_3, b_3(15,0), c_3;
	to_3(a, a_3);
	to_3(c, c_3);

	while (a_3.size() > c_3.size()) c_3.push_back(0);
	while (c_3.size() > a_3.size()) a_3.push_back(0);

	reverse(a_3.begin(), a_3.end());
	reverse(c_3.begin(), c_3.end());

	int step = 1;
	int ans = 0;

	for (int i = a_3.size()-1; i >=0; i -= 1) {
		ans += ((c_3[i] - a_3[i] + 3) % 3)*step;
		step *= 3;
	}
	std::cout << ans;

}
