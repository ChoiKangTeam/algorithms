#include <iostream>

int		main(void)
{
	int n;

	std::cin >> n;
	while (n)
	{
		std::cout << "long ";
		n -= 4;
	}
	std::cout << "int";
	return (0);
}