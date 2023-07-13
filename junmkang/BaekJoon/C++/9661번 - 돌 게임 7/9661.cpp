#include <iostream>

int		main()
{
	long long	n;
	std::cin >> n;
	if (n % 5 == 0 || n % 5 == 2) std::cout << "CY";
	else std::cout << "SK";

	return (0);
}