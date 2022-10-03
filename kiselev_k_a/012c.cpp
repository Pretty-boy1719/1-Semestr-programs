#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<map>
 
int main()
{
	int n = 0, m = 0;
	std::cin >> n >> m;
	std::vector<int>a(n, 0);
	for (int i = 0;i < n;i += 1) {
		std::cin >> a[i];
	}
	sort(a.begin(), a.end());
	std::map<std::string, int> list;
	std::string s;
	for (int i = 0;i < m;i += 1) {
		std::cin >> s;
		list[s] += 1;
	}
 
	std::vector<int>cnt(list.size());
	int d = 0;
	for (auto now : list) {
		cnt[d] = now.second;
		d += 1;
	}
	sort(cnt.rbegin(), cnt.rend());
	int amin = 0, amax = 0;
	for (int i = 0;i < cnt.size();i += 1) {
		amin += cnt[i] * a[i];
	}
	sort(a.rbegin(), a.rend());
	for (int i = 0;i < cnt.size();i += 1) {
		amax += cnt[i] * a[i];
	}
	std::cout << amin << " " << amax;
    return 0;
}
