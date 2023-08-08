#include <iostream>

int y[51], x[51];

int		main(void)
{
	int n, m;
	int yCount = 0, xCount = 0;
	char c;
	
	std::cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> c;
			if (c == 'X') {
				if (!y[i]) {
					y[i] = 1;
					yCount++;
				}
				if (!x[j]) {
					x[j] = 1;
					xCount++;
				}
			}
		}
	}
	if (n - yCount <= m - xCount) std::cout << m - xCount;
	else std::cout << n - yCount;

	return (0);
}