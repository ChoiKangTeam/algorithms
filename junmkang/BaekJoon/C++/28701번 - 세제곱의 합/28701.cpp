#include <iostream>
#include <cmath>

int		main(void)
{
	int n;
	int sum = 0, sum3 = 0;

	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += i;
		sum3 += (int)std::pow(i, 3);
	}
	std::cout << sum << "\n" << (int)std::pow(sum, 2) << "\n" << sum3 << "\n";

	return (0);
}