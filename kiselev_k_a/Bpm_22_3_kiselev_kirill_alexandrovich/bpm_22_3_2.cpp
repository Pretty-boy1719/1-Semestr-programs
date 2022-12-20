#include <iostream>
#include<iomanip>
#include<fstream>
#include<vector>


double DistanceFromCentre(const double& x, const double& y) {
	return std::sqrt(x * x + y * y);
}

int main() {

	int count_of_points = 0;
	std::cin >> count_of_points;

	int answer = 0;

	double x = 0, y = 0;
	for (int i = 0; i < count_of_points; i += 1) {
		std::cin >> x >> y;
		if ((x <= 2 && y <= 1) && DistanceFromCentre(x, y) > 1)
			answer += 1;
	}

	std::cout << answer;
}
