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

typedef long long ll;
typedef long double ld;

const double eps = 1e-3;

long double y(long double x) {
	return cos(x);
}

long long factorial(int n) {
	long long ans = 1;
	for (int i = 1; i <= n; i += 1) ans *= i;
	return ans;
}

long double f(long double x, long double i) {
	return (std::pow(-1, i)*std::pow(x, 2 * i)) / factorial(2 * i);
}

long double s(long double x) {
	long double cur_sum = 0;
	int i = 0;
	long double s_i = f(x, i);
	while (std::abs(s_i) > eps) {
		cur_sum += s_i;
		i += 1;
		s_i = f(x, i);
	}
	return cur_sum;
}


int main() {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);

	long double a = -1, b = 1, step = 0.1;
	std::cout << "x | s(x) | f(x) \n";

	for (long double i = a; i <= b; i += step) {
		std::cout << i << " " << s(i) << " " << y(i) << std::endl;
	}
}
