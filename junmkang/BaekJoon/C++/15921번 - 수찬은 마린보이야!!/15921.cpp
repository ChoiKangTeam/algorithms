#include <iostream>

int		test[101];

int		main(void)
{
	int n, temp;
	float p = 0, sum = 0, ans;

	std::cin >> n;
	if (n == 0) {
		std::cout << "divide by zero" << "\n";
		return (0);
	}
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		test[temp] += 1;
		sum += temp;
	}
	for (int i = 1; i <= 100; i++) {
		p += i * ((float)test[i] / n);
	}
	sum /= n;
	ans = sum / p;
	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << ans << "\n";

	return (0);
}
