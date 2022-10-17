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
		std::string s = "";
		std::cin >> s;
	
		int curCount = 1;
		bool f = true;

		for (int i = 1; i < s.size(); i += 1) {
			if (s[i] != s[i - 1] && curCount == 1) f = false;
			if (s[i] == s[i - 1]) curCount += 1;
			if (s[i] != s[i - 1] && curCount > 1) curCount = 1;
		}
		if (curCount == 1) f = false;
		
		std::cout <<( f ? "YES\n" : "NO\n");

		t -= 1;
	}
}
