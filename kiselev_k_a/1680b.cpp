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

	int t = 0;
	std::cin >> t;
	while (t > 0) {
		int n = 0, m = 0;
		std::cin >> n >> m;
		char a[5][5];

		for (int i = 0; i < n; i += 1) {
			for (int j = 0; j < m; j += 1) {
				std::cin >> a[i][j];
			}
		}

		int minX = n, minY =m ;

		for (int i = 0; i < n; i += 1) {
			for (int j = 0; j < m; j += 1) {
				if (a[i][j] == 'R') {
					minX = std::min(minX, i);
					minY = std::min(minY, j);
				}
			}
		}
		
		std::cout << (a[minX][minY] == 'R' ? "YES\n" : "NO\n");
		
		t -= 1;
	}
}
