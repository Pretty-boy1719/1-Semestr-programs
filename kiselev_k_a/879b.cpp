#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<fstream>
#include <algorithm>
#include<set>
#include<queue>

int main() {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);

	long long n = 0, k = 0;
	std::cin >> n >> k;

	std::deque<std::pair<long long,long long>> q;
	std::vector<long long> CountOfVictory(n, 0);

	long long MaxPower = 0;

	for (long long i = 0; i < n; i += 1) {
		long long temp = 0;
		std::cin >> temp;
		q.push_back({ temp,i });

		MaxPower = std::max(temp, MaxPower);
	}

	bool IsSomeoneWin = false;
	long long Strength = 0;

	if (k > n) {
		Strength = MaxPower;
		IsSomeoneWin = true;
	}

	while (!IsSomeoneWin) {
		std::pair<long long,long long> FirstPerson = q.front();
		q.pop_front();
		std::pair<long long,long long> SecondPerson = q.front();
		q.pop_front();
		if (FirstPerson.first > SecondPerson.first) {
			CountOfVictory[FirstPerson.second] += 1;
			q.push_front(FirstPerson);
			q.push_back(SecondPerson);

			if (CountOfVictory[FirstPerson.second] >= k) {
				IsSomeoneWin = true;
				Strength = FirstPerson.first;
			}
		} 
		else
		{
			CountOfVictory[SecondPerson.second] += 1;
			q.push_front(SecondPerson);
			q.push_back(FirstPerson);

			if (CountOfVictory[SecondPerson.second] >= k) {
				IsSomeoneWin = true;
				Strength = SecondPerson.first;
			}
		}
	}

	std::cout << Strength;

	return 0;
}
