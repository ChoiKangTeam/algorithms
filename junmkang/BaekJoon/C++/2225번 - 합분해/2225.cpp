#include <iostream>

long long dp[201][201];

int		main(void)
{
	int n, k;
	
	std::cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= k; j++) {
			if (j == 1 || i == 1)
				dp[i][j] = j;
			if (1 <= j - 1 && 1 <= i - 1)
			dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % 1000000000;
		}
	}
	std::cout << dp[n][k];

	return (0);
}