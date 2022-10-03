#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<fstream>
#include <algorithm>
#include<set>


int main() {

	int t = 0;

	std::cin >> t;
	for (int m = 0; m < t; m++) {
		int n = 0, x = 0;
		std::cin >> n >> x;
		std::vector<int>a(1003,0);
		int temp = -1;
		for (int i = 0; i < n; i++) {
			std::cin >> temp;
			a[temp] = 1;
		}
		temp = 0;
		while ((x > 0 || a[temp + 1] == 1) && temp<=1000) {
			temp += 1;
			if (a[temp] == 0) x -= 1;
		}
		std::cout << temp<<"\n";


	}
	return 0;
}
