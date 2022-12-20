#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>


int main()
{
	std::string s="";
	std::cin >> s;

	bool isThreeDiffrent=false;

	if (s.find("ABC")!=-1) {
		isThreeDiffrent = true;
	}
	if (s.find("ACB") != -1) {
		isThreeDiffrent = true;
	}
	if (s.find("BAC") != -1) {
		isThreeDiffrent = true;
	}
	if (s.find("BCA") != -1) {
		isThreeDiffrent = true;
	}
	if (s.find("CAB") != -1) {
		isThreeDiffrent = true;
	}
	if (s.find("CBA") != -1) {
		isThreeDiffrent = true;
	}

	if (isThreeDiffrent) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}

	return 0;
}

