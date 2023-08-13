#include <iostream>

int		main(void)
{
	int n, m, j, temp, end, count = 0, place = 1;

	std::cin >> n >> m;
	std::cin >> j;
	for (int i = 0; i < j; i++) {
		std::cin >> temp;
		if (place + m - 1 < temp) {
			end = temp - (place + m - 1);
			count += end;
			place = (place + end);
		}
		else if (place > temp) {
			count += place - temp;
			place = temp;
		}
	}
	std::cout << count;

	return (0);
}