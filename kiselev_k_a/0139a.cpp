#include<iostream>
#include<vector>

int main()
{
	int n=0;
	std::cin >> n;
	
	std::vector<int> a(7);
   
	for (int i = 0; i < 7; i++) {
		std::cin >> a[i];
	}

	int day = -1;
	while (n > 0) {
		day = (day + 1) % 7;
		n -= a[day];
	}
	std::cout << day + 1;
	return 0;
}
 
