#include<iostream>
#include<cmath>
#include<vector>
const double eps = 1e-4;

long long factorial(int n) {
    long long fac = 1;
    for (int i = 1; i <= n; i += 1) fac *= i;
    return fac;
}

long double f(long double x, long double i) {
    return (std::pow(2 * x, i) / factorial(i));
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

    long double a = 0.1, b = 1, step = 0.05;
    std::cout << "x |  s(x) \n";

    for (long double i = a; i <= b; i += step) {
        std::cout << i << "   " << s(i) << std::endl;
    }
    return 0;

}
