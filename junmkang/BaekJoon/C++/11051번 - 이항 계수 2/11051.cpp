#include <iostream>

long long	f[1001][1001];


// dp[n][k] = dp[n - 1][k - 1] + dp[n - 1][k]
// 1
// 1 1
// 1 2 1
int		main(void)
{
	long long n, k;
	std::cin >> n >> k;

	f[0][0] = 1;
	f[1][0] = 1;
	f[1][1] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) f[i][j] = 1;
			f[i][j] = (f[i - 1][j - 1] + f[i - 1][j]) % 10007;
		}
	}
	std::cout << f[n][k];

	return (0);
}