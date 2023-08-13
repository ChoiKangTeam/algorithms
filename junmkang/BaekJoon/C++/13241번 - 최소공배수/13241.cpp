#include <iostream>

long long gcd(long long a, long long b)
{
	long long c;
	while(b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int		main()
{
	long long a, b;

	std::cin >> a >> b;
	std::cout << (a * b / gcd(a, b));

	return (0);
}