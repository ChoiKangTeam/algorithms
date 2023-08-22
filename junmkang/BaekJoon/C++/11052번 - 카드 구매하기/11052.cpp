#include <iostream>
#include <algorithm>

int		dp[1001];
int		p[1001];

int		main(void)
{
	int n;

	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		std::cin >> p[i];
	}
	dp[1] = p[1];
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++) {
			dp[i] = std::max(dp[i - j] + p[j], dp[i]);
		}
	}
	std::cout << dp[n];

	return (0);
}