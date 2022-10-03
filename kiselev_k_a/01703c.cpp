
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main()
{
	int t = 0;
	std::cin >> t;
	while (t > 0) {
		int n = 0, m = 0;
		std::cin >> n;
		std::vector<int>a(n, 0);
		for (int i = 0;i < n;i += 1) {
			std::cin >> a[i];
		}
		int len = 0;
		std::string s;
		for (int i = 0;i < n;i += 1) {
			std::cin >> len >> s;
			for (int j = 0;j < len;j += 1) {
				if (s[j] == 'D')a[i] = (a[i] + 1) % 10;
				else a[i] = (a[i] - 1+10) % 10;
			}
		}

		for (auto now : a) {
			std::cout << now << " ";
		}
		std::cout << "\n";
		t -= 1;
	}
	
    return 0;
}

