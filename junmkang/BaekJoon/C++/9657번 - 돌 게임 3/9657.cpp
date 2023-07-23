#include <iostream>

int		dp[1001] = {0};

// SK = 0, CY = 1
void	stone(int n)
{
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 0;
	dp[4] = 0;
	for(int i = 5; i <= n; i++) {
		if (dp[i - 1] == 1 || dp[i - 3] == 1 || dp[i - 4] == 1)
			dp[i] = 0;
		else
			dp[i] = 1;
	}
}

int		main(void)
{
	int n;

	std::cin >> n;
	stone(n);
	if (dp[n] == 0) std::cout << "SK";
	else std::cout << "CY";

	return (0);
}