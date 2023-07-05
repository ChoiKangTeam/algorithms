#include <iostream>

int		main(void)
{
	int n, temp;
	long long max = -1001, sum = 0;
	std::cin >> n;
	for(int i = 0; i < n; i++) {
		std::cin >> temp;
		sum += temp;
		if (max < sum) max = sum;
		if (sum < 0) sum = 0;
	}
	std::cout << max;

	return (0);
}