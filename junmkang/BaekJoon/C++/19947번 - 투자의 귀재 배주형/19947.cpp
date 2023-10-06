#include <iostream>
#include <cmath>

int dp[11];

int main(void)
{
	int h, y, big;
	std::pair <int, double> bonus[3] = {std::make_pair(1, 1.05), std::make_pair(3, 1.2), std::make_pair(5, 1.35)};

	std::cin >> h >> y;
	dp[0] = h;
	for (int i = 1; i <= y; i++) {
		big = -1;
		for (int j = 0; j < 3; j++) {
			if (0 <= i - bonus[j].first) {
				if (big < (int)floor(dp[i - bonus[j].first] * bonus[j].second))
					big = (int)floor(dp[i - bonus[j].first] * bonus[j].second);
			}
		}
		dp[i] = big;
	}
	std::cout << dp[y];

	return (0);
}
