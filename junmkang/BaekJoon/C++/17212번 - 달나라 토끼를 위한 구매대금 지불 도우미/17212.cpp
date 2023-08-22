#include <iostream>
#include <algorithm>

int		f[100001];

int		dp(int coin)
{
	if (coin == 0) return (0);
	if (coin == 1) return (1);
	if (coin == 2) return (1);
	if (coin == 3) return (2);
	if (coin == 4) return (2);
	if (coin == 5) return (1);
	if (coin == 6) return (2);
	if (coin == 7) return (1);
	if (f[coin]) return (f[coin]);
	int min = std::min(std::min(std::min(dp(coin - 7), dp(coin - 5)), dp(coin - 2)), dp(coin - 1)) + 1;
	return (f[coin] = min);
}

int		main(void)
{
	int n;
	
	std::cin >> n;
	std::cout << dp(n);

	return (0);
}