#include <iostream>

const int	INF = 10000;

int		city[21][2];
int		dp[INF];

// 0 : [비용]
// 1 : [고객의 수]
int		main(void)
{
	int c, n, min, num, cost;

	std::cin >> c >> n;
	for (int i = 1; i <= n; i++) {
		std::cin >> city[i][0] >> city[i][1];
	}
	for (int i = 1; i <= INF; i++) {
		min = 1000000;
		for (int j = 1; j <= n; j++) {
			if (i == city[j][1]) 
				min = std::min(min, city[j][0]);
			if (1 <= i - city[j][1]) 
				min = std::min(min, dp[i - city[j][1]] + city[j][0]);
		}
		dp[i] = min;
	}
	min = 1000000;
	for (int i = c; i < INF; i++) {
		min = std::min(min, dp[i]);
	}
	std::cout << min;

	return (0);
}