#include <iostream>

int		main(void)
{
	int n, sum = 0;
	while (true)
	{
		std::cin >> n;
		if (n == -1) break;
		sum += n;
	}
	std::cout << sum;

	return (0);
}