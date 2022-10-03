#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	int n = 0, k = 0,t=0;
	std::cin >> t;
	for (int m = 0; m < t; m += 1) {
		std::cin >> n >> k;

		std::vector<int>a(k);
		for (int i = 0; i < k; i += 1) {
			std::cin >> a[i];
		}

		sort(a.rbegin(), a.rend());

		int count = 0;
		long long sum = 0;

		while (count < k && sum + n - a[count]<n) {
			sum += n - a[count];
			count += 1;
		}
		std::cout << count << "\n";		
	}
	return 0;
}
 
