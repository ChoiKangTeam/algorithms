#include <iostream>

int		dp[100001];

int		main(void)
{
	int n, count = 0;

	std::cin >> n;
	dp[1] = -1;
	dp[2] = 1;
	dp[3] = -1;
	dp[4] = 2;
	dp[5] = 1;
	dp[6] = 3;
	dp[7] = 2;
	dp[8] = 4;
	for (int i = 9; i <= n; i++) {
		dp[i] = std::min(dp[i - 5], dp[i - 2]) + 1;
	}
	std::cout << dp[n];

	return (0);
}