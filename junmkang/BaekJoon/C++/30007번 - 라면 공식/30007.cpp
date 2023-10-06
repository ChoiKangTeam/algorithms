#include <iostream>

int		main(void)
{
	int n, a, b, x;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a >> b >> x;
		std::cout << a * (x - 1) + b << "\n";
	}

	return (0);
}