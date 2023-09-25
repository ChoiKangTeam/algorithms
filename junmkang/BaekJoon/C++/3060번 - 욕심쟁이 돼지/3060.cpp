#include <iostream>


int		main(void)
{
	long long t, n, temp, sum, day;

	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> n;
		sum = 0;
		for (int j = 0; j < 6; j++) {
			std::cin >> temp;
			sum += temp;
		}
		day = 1;
		while (sum <= n) {
			day++;
			sum *= 4;
		}
		std::cout << day << "\n";
	}

	return (0);
}
// 3, 2, 7, 1, 5, 4 = 22
// 10, 17, 14, 16, 12, 19 = 88