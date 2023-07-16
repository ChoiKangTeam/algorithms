#include <iostream>
#include <algorithm>

int		main(void)
{
	int n, max = -1;
	int tp[16][2] = {0,}, dp[16] = {0,};

	std::cin >> n;
	for (int i = 0; i < n; i++)
		std::cin >> tp[i][0] >> tp[i][1];

	for (int i = 0; i <= n; i++) {
		int deadline = i + tp[i][0];
		if (max > dp[i]) dp[i] = max;
		if (deadline <= n)
			dp[deadline] = std::max(dp[deadline], tp[i][1] + dp[i]);
		if (dp[i] > max) max = dp[i];
	}
	std::cout << max;

	return (0);
}