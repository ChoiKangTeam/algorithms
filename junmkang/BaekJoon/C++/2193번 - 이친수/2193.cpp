#include <iostream>

int		main(void)
{
	long long n;
	long long a[91] = {0,};

	std::cin >> n;
	a[0] = 0;
	a[1] = 1;
	a[2] = 1;
	for(int i = 2; i <= n; i++) {
		a[i + 1] = a[i] + a[i - 1];
	}
	std::cout << a[n];

	return (0);
}