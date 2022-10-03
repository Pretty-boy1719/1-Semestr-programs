#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<fstream>
#include <algorithm>
#include<set>

const double eps = 1e-4;
const double PI = acos(0.0) * 2;

long double y(long double x) {
	return std::pow(std::exp(1), 2 * x);
}

long long factorial(int n) {
	long long ans = 1;
	for (int i = 1; i <= n; i += 1) ans *= i;
	return ans;
}

long double f(long double x, long double i) {
	return std::pow(2 * x, i) / factorial(i);
}

long double s(long double x) {
	long double cur_sum = 0;
	int i = 0;
	long double s_i = f(x, i);
	while (std::abs(cur_sum) > eps) {
		cur_sum += s_i;
		i += 1;
		s_i = f(x, i);
	}
	return cur_sum;
}


int main() {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);

	long double a = 0, b = 1, step = 0.1;
	std::cout << "x | s(x) | f(x) \n";

	for (long double i = a; i <= b+eps; i += step) {
		std::cout << i << " " << s(i) << " " << y(i) << std::endl;
	}
}
