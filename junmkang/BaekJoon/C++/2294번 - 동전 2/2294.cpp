#include <iostream>

int		coin[101];
int		dp[10001];

int		main(void)
{
	int n, k, temp;

	std::cin >> n >> k;
	for (int i = 0; i < n; i++) {
		std::cin >> coin[i];
	}
	for (int i = 1; i <= k; i++) {
		dp[i] = 10001;
		for (int j = 0; j < n; j++) {
			if (i == coin[j])
				dp[i] = 1;
			else if (0 < i - coin[j] && dp[i - coin[j]] + 1 < dp[i]) {
				dp[i] = dp[i - coin[j]] + 1;
			}
		}
	}
	if (dp[k] == 10001) std::cout << "-1";
	else std::cout << dp[k];

	return (0);
}