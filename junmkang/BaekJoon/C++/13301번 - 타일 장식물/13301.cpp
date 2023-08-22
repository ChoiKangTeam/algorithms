#include <iostream>

long long f[81];

long long	dp(long long n) 
{
	if (n == 1) return (4);
	if (n == 2) return (6);
	if (n == 3) return (10);
	if (f[n] != 0) return (f[n]);
	return (f[n] = dp(n - 1) + dp(n - 2));
}

int		main(void)
{
	long long n;
	std::cin >> n;
	std::cout << dp(n);

	return (0);
}