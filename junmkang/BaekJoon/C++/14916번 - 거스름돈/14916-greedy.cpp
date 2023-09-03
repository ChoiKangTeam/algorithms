#include <iostream>

int		main(void)
{
	int n, count = 0;

	std::cin >> n;
	if (n % 2 != 0) {
		count += 1;
		n = n - 5;
	}
	count += (n / 10) * 2;
	count += (n % 10) / 2;
	if (n < 0) count = -1;
	std::cout << count;

	return (0);
}