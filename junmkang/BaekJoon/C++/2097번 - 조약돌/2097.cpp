#include <iostream>
#include <math.h>

int		main(void)
{
	int n, root;
	std::cin >> n;
	if (n == 1 || n == 2)
		std::cout << 4;
	else {
		root = std::round(std::sqrt(n));
		if (root * root >= n)
			std::cout << (root - 1) * 4;
		else
			std::cout << ((root - 1) * 2) + ((root) * 2);
	}

	return (0);
}