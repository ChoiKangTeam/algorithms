#include <iostream>
#include <algorithm>
#include <string>

int		alpha[1001][1001];

int		main(void)
{
	std::string	a, b;
	int			aLen = 0, bLen = 0;

	std::cin >> a >> b;
	aLen = a.length();
	bLen = b.length();
	for (int i = 1; i <= aLen; i++) {
		for (int j = 1; j <= bLen; j++) {
			if (i == 0 || j == 0)
				alpha[i][j] = 0;
			else if (a[i - 1] == b[j - 1])
				alpha[i][j] = alpha[i - 1][j - 1] + 1;
			else
				alpha[i][j] = std::max(alpha[i - 1][j], alpha[i][j - 1]);
		}
	}
	std::cout << alpha[aLen][bLen];

	return (0);
}