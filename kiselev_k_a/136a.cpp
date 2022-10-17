#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<fstream>
#include <algorithm>
#include<set>



int main() {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);

	int n = 0;
	
	std::cin >> n;
	
	std::vector<int>p(n+1, 0);
	std::vector<int>a(n+1, 0);
	for (int i = 1; i <= n; i += 1) {
		std::cin >> p[i];
	}

	for (int i = 1; i <= n; i += 1) {
		a[p[i]] = i;
	}

	for (int i = 1; i <= n;i+=1) {
		std::cout << a[i] << " ";
	}

	

}
