#include <iostream>

int		coin[101];
int		dp[10001];

int main(void)
{
	int n, k, temp, sum;

	std::cin >> n >> k;
	for (int i = 0; i < n; i++) {
		std::cin >> coin[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= k; j++) {
			temp = dp[j];
			if (coin[i] == j) dp[j]++;
			if (1 <= j - coin[i])
				dp[j] = temp + dp[j - coin[i]];
		}
	}
	std::cout << dp[k] << "\n";

	return (0);
}