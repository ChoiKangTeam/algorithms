#include <iostream>

int		main(void)
{
	int s, k, h;

	std::cin >> s >> k >> h;
	if (s + k + h >= 100) std::cout << "OK";
	else {
		if (k > s && h > s) std::cout << "Soongsil";
		if (s > h && k > h) std::cout << "Hanyang";
		if (s > k && h > k) std::cout << "Korea";
	}

	return (0);
}