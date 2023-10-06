#include <iostream>

int		main(void)
{
	float w, h;
	std::cin >> w >> h;
	std::cout << std::fixed;
	std::cout.precision(1);
	std::cout << w * h / 2;

	return (0);
}