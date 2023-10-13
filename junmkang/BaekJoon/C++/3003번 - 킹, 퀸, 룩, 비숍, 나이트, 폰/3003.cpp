#include <iostream>

int		main(void)
{
	int n;
	for (int i = 1; i <= 2; i++) {
		std::cin >> n;
		std::cout << 1 - n << " ";
	}
	for (int i = 1; i <= 3; i++) {
		std::cin >> n;
		std::cout << 2 - n << " ";
	}
	std::cin >> n;
	std::cout << 8 - n;

	return (0);
}