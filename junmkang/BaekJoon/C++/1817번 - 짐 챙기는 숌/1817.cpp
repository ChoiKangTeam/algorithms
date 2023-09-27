#include <iostream>

int		main(void)
{
	int n, m, book, sum = 0, count = 0;

	std::cin >> n >> m;
	for (int i = 0; i < n; i++) {
		std::cin >> book;
		if (sum + book <= m) {
			sum += book;
		}
		else {
			count++;
			sum = book;
		}
	}
	if (sum) count++;
	std::cout << count << "\n";

	return (0);
}
