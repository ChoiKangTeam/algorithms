#include <iostream>
#include <algorithm>

int		main(void)
{
	int n, d = 0, p = 0;
	char score;
	
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> score;
		if (std::abs(d - p) < 2)
		{
			if (score == 'D') d++;
			if (score == 'P') p++;
		}
	}
	std::cout << d << ":" << p;

	return (0);
}