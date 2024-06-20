#include <iostream>
#include <string.h>
#include <algorithm>

std::string str[20001];

bool compare(const std::string &a, const std::string &b) {
	if (a.length() != b.length()) {
		return a.length() < b.length();
	}
	return a < b;
}

int main(void) {

	int n;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> str[i];
	}
	std::sort(str, str+n, compare);
	for (int i = 0; i < n; i++) {
		if (str[i] != str[i + 1]) {
			std::cout << str[i] << "\n";
		}
	}

	return (0);
}