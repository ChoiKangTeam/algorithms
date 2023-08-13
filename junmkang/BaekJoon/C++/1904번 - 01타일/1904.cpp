#include <iostream>

int		t[1000001];

int		dp(int n)
{
	if (n == 1) return (1);
	if (n == 2)	return (2);
	if (n == 3) return (3);
	if (!t[n]) return (t[n]);
	return (t[n] = ((dp(n - 1) + dp(n - 2)) % 15746));
}

int		main(void)
{
	int		n;
	std::cin >> n;
	std::cout << (dp(n)) << "\n";

	return (0);
}